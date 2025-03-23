#include "../include/DTFecha.h"
#include "../include/DTRefer.h"
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include <set>
#include <string> 
using namespace std;

Publicacion ::Publicacion(string DOI, string titulo, DTFecha fecha, set<Investigador*> autores){
    this->DOI=DOI;
    this->titulo=titulo;
    this->fecha=fecha;
    this->autores=autores;
}

void Publicacion::setDOI (string DOI){
    this->DOI=DOI;
}

void Publicacion::setTitulo (string titulo){
    this->titulo=titulo;
}

void Publicacion::setFecha(DTFecha fecha){
    this->fecha=fecha;
}

void Publicacion::agregarAutor(Investigador& investigador) {
    Investigador* inv = &investigador;  
    this->autores.insert(inv);         
}

void Publicacion::eliminarAutor(Investigador& investigador) {
    Investigador* inv = &investigador;  
    this->autores.erase(inv);           
}


set<Investigador*> Publicacion::getAutores(){
    return this->autores;
}

string Publicacion::getDOI(){
    return this->DOI;
}
        
string Publicacion::getTitulo(){
    return this->titulo;
}
        
DTFecha Publicacion::getFecha(){
    return this->fecha;
}

DTRefer Publicacion ::getDT(){
    set<string> inv;
    for (Investigador* investigador : this->autores) {
        inv.insert(investigador->getNombre());
    }
    return DTRefer(this->DOI, this->titulo,this->fecha,inv);
}


