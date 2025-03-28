#include "../include/DTFecha.h"

DTFecha::DTFecha() {
  this->dia = 0;
  this->mes = 0;
  this->anio = 0;
}

DTFecha::DTFecha(int dia, int mes, int anio) {
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
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
bool DTFecha::mayorQue(DTFecha fecha) {
    if (this->anio > fecha.getAnio()) {
        return true;
    } else if (this->anio == fecha.getAnio()) {
        if (this->mes > fecha.getMes()) {
            return true;
        } else if (this->mes == fecha.getMes()) {
            return this->dia > fecha.getDia();
        }
    }
    return false;
}