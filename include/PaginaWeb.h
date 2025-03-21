#ifndef PAGINAWEB
#define PAGINAWEB

#include <string>
#include <set>
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include "../include/DTFecha.h"

using namespace std;

class PaginaWeb : public PUBLICACION{
private:
    string url;
    set<string> contenidoExtraido;
public:
    PaginaWeb(string DOI, string titulo, DTFecha fecha, set<investigador*> autores, string url, set<string> contenidoExtraido);
    
    void setUrl(string url);
    void setContenidoExtraido(string contenidoExtraido);
    
    string getUrl();
    set<string> getContenidoExtraido();
    
    virtual bool contienePalabra(string palabra);
};

#endif
