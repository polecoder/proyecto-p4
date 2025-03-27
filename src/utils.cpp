#include "../include/utils.h"
#include "../include/Publicacion.h"

#include <list>
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
// FALTA IMPLEMENTAR
}