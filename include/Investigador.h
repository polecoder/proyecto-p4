#ifndef INVESTIGADOR
#define INVESTIGADOR
#include <set>
#include <string> 

#include "DTFecha.h"

using namespace std;

// Forward declaration
class Publicacion;

class Investigador{
    private:
        string ORCID;
        string nombre;
        string institucion;
        set<Publicacion*> publicaciones;
    public:
        Investigador(string ORCID, string nombre, string institucion, set<Publicacion*> publicaciones);

        void setORCID(string ORCID);
        void setNombre(string nombre);
        void setInstitucion(string institucion);

        void agregarPublicacion(Publicacion* publicacion);
        bool estaPublicacion(Publicacion* publicacion);

        //PRE: La publicacion se encuentra en el set
        void eliminarPublicacion(Publicacion* publicacion);

        string getORCID();
        string getNombre();
        string getInstitucion();
        string toString();
        set<Publicacion> getPublicaciones();

        set<string> listarPublicaciones(DTFecha desde, string palabra);
};

#endif
