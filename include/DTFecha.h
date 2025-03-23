#ifndef FECHA
#define FECHA

class DTFecha {
  private:
    int dia;
    int mes;
    int anio;
  public:
    DTFecha();
    DTFecha(int dia, int mes, int anio);
    ~DTFecha(); // duda
    int getDia();
    int getMes();
    int getAnio();
    bool mayorQue(DTFecha fecha);
};


#endif