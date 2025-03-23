#ifndef ARTICULOREVISTA
#define ARTICULOREVISTA
#include "../include/DTFecha.h"
#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include <set>
#include <string> 
using namespace std;

class ArticuloRevista: public Publicacion {
    private:
        string revista;
        string extracto;
    public:
        ArticuloRevista(string DOI, string titulo, DTFecha fecha,set<Investigador*> autores, string nombreRevista, string extracto);

        void setRevista(string revista);
        void setExtracto(string extracto);

        string getRevista();
        string getExtracto();

        virtual bool contienePalabra (string palabra);
};
#endif

