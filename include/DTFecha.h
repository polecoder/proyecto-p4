#ifndef FECHA
#define FECHA

class DTFecha {
  private:
    int dia;
    int mes;
    int anio;
  public:
    DTFecha::DTFecha();
    DTFecha::DTFecha(int dia, int mes, int anio);
    DTFecha::~DTFecha(); // duda
    int getDia();
    int getMes();
    int getAnio();
};


#endif