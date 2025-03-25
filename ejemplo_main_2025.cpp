#include <iostream>
#include <list>
#include <map>
#include "include/Investigador.h"
#include "include/Publicacion.h"
#include "include/ArticuloRevista.h"
#include "include/Libro.h"


std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void parte_a(){
}

void parte_b(){
}

void parte_c(){
	DTFecha fecha = DTFecha(20,12,2024);
	std::set<Investigador*> autores;
	PaginaWeb pag = PaginaWeb("10.3456/ghi789", "Diagramas Para Principiantes", fecha, autores, "www.umlparaprincipiantes.com", "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades");

	PaginaWeb* inv = &pag;
	coleccion_guardarPublicacion(inv);

}

void parte_d(){
}

void parte_e(){
	std::set<Publicacion*> publicaciones;
	Investigador inv = Investigador("0000-0003-1234-5678", "Carla Oliveri", "Universidad de la Republica", publicaciones);
	Investigador* Carla = &inv;
	coleccion_guardarInvestigador(Carla);

	std::set<Publicacion*> publicaciones2;
	Investigador inv2 = Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico", publicaciones2);
	Investigador* Alberto = &inv2;
	coleccion_guardarInvestigador(Alberto);

}

void parte_f(){
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}

int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}
