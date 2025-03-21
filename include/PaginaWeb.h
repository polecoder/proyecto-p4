#ifndef PAGINAWEB
#define PAGINAWEB

#include <string>
#include <set>
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include "../include/DTFecha.h"

using namespace std;

class PaginaWeb : public Publicacion {
    private:
        string url;
        string contenidoExtraido;
    public:
        PaginaWeb(string DOI, string titulo, DTFecha fecha, set<Investigador*> autores, string url, string contenidoExtraido);
        
        void setUrl(string url);
        void setContenidoExtraido(string contenidoExtraido);
        
        string getUrl();
        string getContenidoExtraido();
        
        virtual bool contienePalabra(string palabra);
};

#endif
