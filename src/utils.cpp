#include "../include/utils.h"
#include "../include/Publicacion.h"
#include <iostream>
#include <ostream>

using namespace std;

void imprimirPublicaciones(list<Publicacion*> publicaciones) {
  list<Publicacion*>::const_iterator iteradorPub;
	for (iteradorPub = publicaciones.begin(); iteradorPub != publicaciones.end(); ++iteradorPub) {
		Publicacion* publicacion = *iteradorPub;
		cout << publicacion->getDT() << endl;
	}
}

void cleanUp() {
    list<Publicacion*>::iterator itPublicacion;
    for (itPublicacion = publicaciones.begin(); itPublicacion != publicaciones.end(); ++itPublicacion) {
        delete *itPublicacion;
    }
    publicaciones.clear();
    map_publicaciones.clear();

    list<Investigador*>::iterator itInvestigador;
    for (itInvestigador = investigadores.begin(); itInvestigador != investigadores.end(); ++itInvestigador) {
        delete *itInvestigador;
    }
    investigadores.clear();
    map_investigadores.clear();
}