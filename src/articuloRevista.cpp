#include "../include/DTFecha.h"
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include "../include/articuloRevista.h"

#include <set>
#include <string>

using namespace std;

ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha,set<Investigador*> autores, string nombreRevista, string extracto): Publicacion(DOI,titulo,fecha,autores) {
    this->revista=nombreRevista;
    this->extracto=extracto;
}

void ArticuloRevista::setRevista(string revista) {
    this->revista=revista;
}

void ArticuloRevista::setExtracto(string extracto) {
    this->extracto=extracto;
}

string ArticuloRevista::getRevista() {
    return this->revista;
}

string ArticuloRevista::getExtracto() {
    return this->extracto;
}

bool ArticuloRevista::contienePalabra(string palabra) {
    return (this->extracto.find(palabra) != string::npos);
}
