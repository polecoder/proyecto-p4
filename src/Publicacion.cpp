#include "../include/DTFecha.h"
#include "../include/DTRefer.h"
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include <set>
#include <string> 
using namespace std;

Publicacion::Publicacion(string DOI, string titulo, DTFecha fecha, set<Investigador*> autores){
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

void Publicacion::agregarAutor(Investigador* investigador) {
    this->autores.insert(investigador);         
}

void Publicacion::eliminarAutor(Investigador* investigador) {
    if (this->autores.find(investigador) != autores.end()) {
        this->autores.erase(investigador);    
    }       
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
    set<Investigador*>::const_iterator iteradorAutores;

    for (iteradorAutores = this->autores.begin(); iteradorAutores != this->autores.end(); ++iteradorAutores) {
        Investigador* autor = *iteradorAutores;
        inv.insert(autor->getNombre());
    }

    return DTRefer(this->DOI, this->titulo,this->fecha,inv);
}


