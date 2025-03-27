#ifndef DTREFER
#define DTREFER
#include "DTFecha.h"
#include <set>
#include <string> 
using namespace std;

class DTRefer{
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        set<string> autores;
    public:
        DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores);
        string getDOI() const;
        string getTitulo() const;
        DTFecha getFecha() const;
        set<string> getAutores() const;
};

ostream& operator<<(ostream&os, const DTRefer& ref);

#endif
