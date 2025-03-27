#include "../include/DTFecha.h"
#include "../include/DTRefer.h"
#include <set>
#include <string>
#include <ostream>
using namespace std;

DTRefer::DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores) {
    this->DOI=DOI;
    this->titulo=titulo;
    this->fecha=fecha;
    this->autores= autores;
}
        
string DTRefer::getDOI(){
    return this->DOI;
}
        
string DTRefer::getTitulo(){
    return this->titulo;
}
        
DTFecha DTRefer::getFecha(){
    return this->fecha;
}
        
set<string> DTRefer::getAutores() {
    return this->autores;
}

ostream& operator<<(ostream& os, DTRefer ref) {
    DTFecha fecha = ref.getFecha();
    os << ref.getDOI() << "->" << ref.getTitulo() << "(" << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << ")/";
    set<string>::iterator it = ref.getAutores().begin();
    while (it != ref.getAutores().end()) {
        os << *it;  // Imprime el autor
        ++it;       // Avanza al siguiente iterador
        if (it != ref.getAutores().end()) { 
            os << ","; // Solo agrega la coma si hay más elementos
        }
    }
    return os;
}