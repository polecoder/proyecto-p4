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