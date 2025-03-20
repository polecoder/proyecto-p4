#include <string>
#include "../include/PaginaWeb.h"

using namespace std;

PaginaWeb::PaginaWeb(string url, string contenidoExtraido){
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

string PaginaWeb:: getUrl(){
    return this->url;
}

string PaginaWeb:: getContenidoExtraido(){
    return this->contenidoExtraido;
};

bool contienePalabra::contienePalabra(string palabra){

}