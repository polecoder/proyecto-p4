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

Investigador::~Investigador(){
}

void Investigador::setORCID (string ORCID){
    ORCID = ORCID;
}

void Investigador::setNombre (string nombre){
    nombre = nombre;
}

void Investigador::setInstitucion (string institucion){
    institucion = institucion;
}

bool Investigador::estaPublicacion(Publicacion* publicacion) {
    return publicaciones.find(publicacion) != publicaciones.end();
}

void  Investigador::eliminarPublicacion(Publicacion* publicacion){
    publicaciones.erase(publicacion);
}

void Investigador:: agregarPublicacion(Publicacion* publicacion){
    publicaciones.insert(publicacion);
}

string Investigador::getORCID(){
    return ORCID;
}

string Investigador::getNombre(){
    return nombre;
}

string Investigador::getInstitucion(){
    return institucion;
}

// Falta una funcion para saber si una fecha es mayor que otra, no se si me corresponde a mi o a publicacion
set<string> Investigador::listarPublicaciones(DTFecha desde, string palabra) {
    set<string> DOI;
    for (Publicacion* publicacion : publicaciones) {
        if (publicacion->getFecha() > desde && publicacion->contienePalabra(palabra)) {
            DOI.insert(publicacion->getDOI());
        }
    }
    return DOI;
}
