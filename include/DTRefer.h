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
        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        set<string>  getAutores();

        // sobrecarga para imprimir
        ostream& operator<<(ostream& os) {
            DTFecha fecha = this->fecha;
            os << this->DOI << "->" << this->titulo << "(" << fecha.getDia() << "/" <<fecha.getMes() <<"/" << fecha.getAnio() << ")/";
            set<string>::iterator it ;
            for (it = this->autores.begin(); it!= this->autores.end(); ++it) {
                string autor = *it; 
                os<<autor;
                if (it != this->autores.end()){
                    os<<",";
                }
            }
            return os;
        }
};
#endif
