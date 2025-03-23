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

bool Investigador::estaPublicacion(Publicacion publicacion) {
    Publicacion* pub = publicacion;
    return this->publicaciones.find(pub) != this->publicaciones.end();
}

// Una pinta de que se rompe todo con esto
void  Investigador::eliminarPublicacion(Publicacion publicacion){
    Publicacion* pub = publicacion;
    this->publicaciones.erase(pub);
}

//Una pinta de que se rompe todo con esto
void Investigador:: agregarPublicacion(Publicacion publicacion){
    Publicacion* pub = publicacion;
    this->publicaciones.insert(pub);
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
