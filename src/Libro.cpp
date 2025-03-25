// Implementacion clase Libro

#include <set>
#include <string>

#include "../include/Libro.h"
#include "../include/Publicacion.h"

// con lista de inicializacion
Libro::Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<Investigador*> autores, set<string> palabrasDestacadas) : Publicacion(DOI, titulo, fecha, autores) {
  this->editorial = editorial;
  this->palabrasDestacadas = palabrasDestacadas;
}

void Libro::setEditorial(string editorial) {
  this->editorial = editorial;
}

void Libro::agregarPalabraDestacada(string palabra) {
  this->palabrasDestacadas.insert(palabra);
}

/*
* PRE-CONDICION: La palabra "palabra" pasada por parametro existe dentro del set de "palabrasDestacadas"
*/
void Libro::eliminarPalabraDestacada(string palabra) {
  this->palabrasDestacadas.erase(palabra);
}

string Libro::getEditorial() {
  return this->editorial;
}

set<string> Libro::getPalabrasDestacadas() {
  return this->palabrasDestacadas;
}

bool Libro::contienePalabra(string palabra) {
  return (this->palabrasDestacadas.find(palabra) != this->palabrasDestacadas.end());
};

using namespace std;