// Definicion clase Libro

#ifndef LIBRO
#define LIBRO

#include <set>
#include <string>

#include "Publicacion.h"
#include "DTFecha.h"
#include "Investigador.h"

using namespace std;

class Libro: public Publicacion {
  private:
    string editorial;
    set<string> palabrasDestacadas;
  public:
    Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<Investigador*> autores, set<string> palabrasDestacadas);

    void setEditorial(string editorial);

    void agregarPalabraDestacada(string palabra);
    void eliminarPalabraDestacada(string palabra);

    string getEditorial();
    set<string> getPalabrasDestacadas();

    virtual bool contienePalabra(string palabra);
};

#endif
