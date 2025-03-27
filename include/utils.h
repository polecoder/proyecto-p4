// Utilidades

#ifndef UTILS
#define UTILS

#include "Publicacion.h"

#include <map>

#include <list>

extern std::list<Publicacion*> publicaciones;
extern std::map<std::string, Publicacion*> map_publicaciones;
extern std::list<Investigador*> investigadores;
extern std::map<std::string, Investigador*> map_investigadores;

using namespace std;

/* Imprime por pantalla una lista de publicaciones linea por linea (parte d y k del main) */
void imprimirPublicaciones(list<Publicacion*>);

void cleanUp();

#endif