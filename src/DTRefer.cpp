#include "../include/DTFecha.h"
#include "../include/DTRefer.h"
#include <set>
#include <string> 
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
        
set<string> DTRefer:: getAutores(){
    return this->autores;
}
