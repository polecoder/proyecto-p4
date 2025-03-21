#include <set>
#include <string>

#include "../include/paginaWeb.h"
#include "../include/publicacion.h"

using namespace std;


PaginaWeb :: PaginaWeb(string DOI, string titulo, DTFecha fecha, set<investigador*> autores, string url, set<string> contenidoExtraido) : Publicacion(DOI, titulo, fecha, autores) url(url), contenidoExtraido(contenidoExtraido){}

    void Paginaweb:: setUrl(string url){
        this->url = url;
    }

    void PaginaWeb:: setContenidoExtraido(set<string> contenidoExtraido){
        this->contenidoExtraido = contenidoExtraido;
    }

    string PaginaWeb:: getUrl(){
        return this->url;
    }
    
    set<string> PaginaWeb:: getContenidoExtraido(){
        return this->contenidoExtraido;
    }
    
    bool contienePalabra(string palabra){
        return (this->extracto.find(palabra)!=string::npos);
    }
