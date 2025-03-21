#ifndef PUBLICACION
#define PUBLICACION
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h"
#include <set>
#include <string> 
using namespace std;

class Publicacion{
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        set<Investigador*> autores;
    public:
        Publicacion(string DOI, string titulo, DTFecha fecha,set<Investigador*> autores);

        void setDOI(string DOI);
        void setTitulo(string titulo);
        void setFecha(DTFecha fecha);

        void agregarAutor(Investigador* investigador);
        void eliminarAutor(Investigador* investigador);  

        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        set<Investigador*> getAutores();
       

        DTRefer getDT();
        virtual bool contienePalabra (string palabra)=0;
};
#endif