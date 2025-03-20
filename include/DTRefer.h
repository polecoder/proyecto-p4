#ifndef REFER
#define REFER
#include "../include/DTFecha.h"
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
        DTRefer ( string DOI, string titulo, DTFecha fecha, set<string> autores);
        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        set<string>  getautores();   
};
#endif