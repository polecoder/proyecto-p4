#include "../include/DTFecha.h"

DTFecha::DTFecha(int dia, int mes, int anio) {
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
}

// duda
DTFecha::~DTFecha() {
  delete this;
}

int DTFecha::getDia() {
  return this->dia;
}

int DTFecha::getMes() {
  return this->mes;
}

int DTFecha::getAnio() {
  return this->anio;
}

/* Retorna true si la fecha de donde se llama la funcion es posterior a "fecha", en caso contrario */
bool DTFecha::mayorQue(DTFecha fecha) {
  if (this->anio <= fecha.getAnio() || this->mes <= fecha.getMes() || this->dia <= fecha.getDia()) {
    return false;
  } 
  return true;
}