#include <set>
#include <string>

#include "../include/PaginaWeb.h"
#include "../include/Publicacion.h"
#include "../include/Investigador.h"

using namespace std;


PaginaWeb:: PaginaWeb(string DOI, string titulo, DTFecha fecha, set<Investigador*> autores, string url, string contenidoExtraido) : Publicacion(DOI, titulo, fecha, autores) {
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

void PaginaWeb:: setUrl(string url){
    this->url = url;
}

void PaginaWeb:: setContenidoExtraido(string contenidoExtraido){
    this->contenidoExtraido = contenidoExtraido;
}

string PaginaWeb:: getUrl(){
    return this->url;
}

string PaginaWeb:: getContenidoExtraido(){
    return this->contenidoExtraido;
}

bool PaginaWeb:: contienePalabra(string palabra){
    return (this->contenidoExtraido.find(palabra) != string::npos);
}
