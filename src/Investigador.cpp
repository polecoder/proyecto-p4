#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include <set>
#include <string> 
using namespace std;

Investigador::Investigador(string ORCID, string nombre, string institucion, set<Publicacion*> publicaciones){
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
    this->publicaciones = publicaciones;
}

void Investigador::setORCID (string ORCID){
    this->ORCID = ORCID;
}

void Investigador::setNombre (string nombre){
    this->nombre = nombre;
}

void Investigador::setInstitucion (string institucion){
    this->institucion = institucion;
}

bool Investigador::estaPublicacion(Publicacion* publicacion) {
    return this->publicaciones.find(publicacion) != this->publicaciones.end();
}

void  Investigador::eliminarPublicacion(Publicacion* publicacion){
    if (Investigador::estaPublicacion(publicacion)) {
        this->publicaciones.erase(publicacion);
    }
}

void Investigador:: agregarPublicacion(Publicacion* publicacion){
    this->publicaciones.insert(publicacion);
}

string Investigador::getORCID(){
    return this->ORCID;
}

string Investigador::getNombre(){
    return this->nombre;
}

string Investigador::getInstitucion(){
    return this->institucion;
}

set<string> Investigador::listarPublicaciones(DTFecha desde, string palabra) {
    set<string> conjuntoDOI;
    set<Publicacion*>::const_iterator iteradorPub;
    for (iteradorPub = this->publicaciones.begin(); iteradorPub != this->publicaciones.end(); ++iteradorPub) {
        Publicacion* publicacion = *iteradorPub;
        DTFecha fechaPublicacion = publicacion->getFecha();
        if (fechaPublicacion.mayorQue(desde) && publicacion->contienePalabra(palabra)) {
            conjuntoDOI.insert(publicacion->getDOI());
        }
    }
    return conjuntoDOI;
}
