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
        
string DTRefer::getDOI() const {
    return this->DOI;
}
        
string DTRefer::getTitulo() const {
    return this->titulo;
}
        
DTFecha DTRefer::getFecha() const {
    return this->fecha;
}
        
set<string> DTRefer::getAutores() const {
    return this->autores;
}

ostream& operator<<(ostream& os, const DTRefer& ref) {
    DTFecha fecha = ref.getFecha();
    os << ref.getDOI() << "->" << ref.getTitulo() << "(" << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << ")/";
    const set<string>& autores = ref.getAutores(); // Referencia constante
    set<string>::iterator it = autores.begin();
    while (it != autores.end()) {
        os << *it;  // Imprime el autor
        ++it;       // Avanza al siguiente iterador
        if (it != autores.end()) { 
            os << ","; // Solo agrega la coma si hay más elementos
        }
    }
    return os;
}
