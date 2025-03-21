// Definicion clase Libro

#ifndef LIBRO
#define LIBRO

#include <set>
#include <string>

#include "Publicacion.h"
#include "DTFecha.h"
/* #include "Investigador.h" */

using namespace std;

class Libro: public Publicacion {
  private:
    string editorial;
    set<string> palabrasDestacadas;
  public:
    Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<Investigador*> autores, set<string> palabrasDestacadas);

    // setters
    void setEditorial(string editorial);

    void agregarPalabraDestacada(string palabra);
    void eliminarPalabraDestacada(string palabra);

    // getters
    string getEditorial();
    set<string> getPalabrasDestacadas();

    // metodos especificos
    virtual bool contienePalabra(string palabra)=0;
};

#endif