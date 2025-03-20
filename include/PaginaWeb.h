#ifndef PAGINAWEB
#define PAGINAWEB

#include <string>
#include "../include/Publicacion.h"

using namespace std;

class PaginaWeb : public PUBLICACION{
private:
    string url;
    string contenidoExtraido;
public:
    PaginaWeb(string url,string contenidoExtraido);
    // ~PaginaWeb();
    
    void setUrl(string url);
    void setContenidoExtraido(string contenidoExtraido);
    
    string getUrl();
    string getContenidoExtraido();
    
    virtual bool contienePalabra(string palabra);
};

#endif