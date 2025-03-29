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
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    bool mayorQue(DTFecha fecha) const;
};


#endif