#ifndef DTFECHA
#define DTFECHA

#include <ostream>

using namespace std;

class DTFecha {
  private:
    int dia;
    int mes;
    int anio;
  public:
    DTFecha();
    DTFecha(int dia, int mes, int anio);
    int getDia();
    int getMes();
    int getAnio();
    bool mayorQue(DTFecha fecha);
};


#endif