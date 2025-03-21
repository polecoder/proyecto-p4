#include "../include/DTFecha.h"
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include "../include/articuloRevista.h"

#include <set>
#include <string>

using namespace std;

articuloRevista::articuloRevista(string DOI, string titulo, DTFecha fecha,set<Investigador*> autores, string nombreRevista, string extracto): Publicacion(DOI,titulo,fecha,autores) {
    this->revista=nombreRevista;
    this->extracto=extracto;
}

void articuloRevista::setRevista(string revista) {
    this->revista=revista;
}

void articuloRevista::setExtracto(string extracto) {
    this->extracto=extracto;
}

string articuloRevista::getRevista() {
    return this->revista;
}

string articuloRevista::getExtracto() {
    return this->extracto;
}

bool articuloRevista::contienePalabra(string palabra) {
    return (this->extracto.find(palabra) != string::npos);
}
