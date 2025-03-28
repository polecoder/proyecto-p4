#include <iostream>
#include <list>
#include <map>
#include <ostream>
#include "include/Investigador.h"
#include "include/Publicacion.h"
#include "include/ArticuloRevista.h"
#include "include/Libro.h"
#include "include/PaginaWeb.h"
#include "include/DTRefer.h"
#include "include/utils.h"

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

void parte_a() {
    DTFecha fecha = DTFecha(15,5,2023);
    std::set<Investigador*> autores;
    Publicacion* publi = new ArticuloRevista("10.1234/abc123", "Fundamentos de POO", fecha, autores,"Programación Avanzada","Introduccion a los principios fundamentales de la programación orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");
    coleccion_guardarPublicacion(publi);

    DTFecha fecha2 = DTFecha(10,2,2024);
    std::set<Investigador*> autores2;
    Publicacion* publi2 = new ArticuloRevista("10.4567/jkl012", "Utilidad de diagramas UML", fecha2, autores2,"Modelado de Software","Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.");
    coleccion_guardarPublicacion(publi2);
}

void parte_b(){
    DTFecha fecha = DTFecha(20,8,2022);
    std::set<Investigador*> autores;
    std::set<string> palabrasImp;
    palabrasImp.insert("Diseno");
    palabrasImp.insert("OOP");
    palabrasImp.insert("Class");

    Libro* libro = new Libro("10.2345/def456", "Patrones de Diseno en C++", fecha, "Software Design", autores, palabrasImp);
    Publicacion* publi = libro;
    coleccion_guardarPublicacion(publi);

    DTFecha fecha2 = DTFecha(20,8,2022);
    std::set<Investigador*> autores2;
    std::set<string> palabrasImp2;
    palabrasImp2.insert("Diagramas");
    palabrasImp2.insert("UML");
    palabrasImp2.insert("Software");
    palabrasImp2.insert("Modelado");


    Libro* libro2 = new Libro("10.5678/mno345", "Guia de UML", fecha2, "IEEE", autores2, palabrasImp2);
    Publicacion* publi2 = libro2;
    coleccion_guardarPublicacion(publi2);
}

void parte_c() {
    DTFecha fecha = DTFecha(20,12,2024);
    std::set<Investigador*> autores;
    PaginaWeb* pag = new PaginaWeb("10.3456/ghi789", "Diagramas Para Principiantes", fecha, autores, "www.umlparaprincipiantes.com", "En esta página web se presenta una guía completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades");
    coleccion_guardarPublicacion(pag);
}

void parte_d(){
	imprimirPublicaciones(publicaciones);
}

void parte_e(){
    std::set<Publicacion*> publicaciones;
    Investigador* Carla = new Investigador("0000-0003-1234-5678", "Carla Oliveri", "Universidad de la Republica", publicaciones);
    coleccion_guardarInvestigador(Carla);

    std::set<Publicacion*> publicaciones2;
    Investigador* Alberto = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico", publicaciones2);
    coleccion_guardarInvestigador(Alberto);
}

void parte_f(){
		list<Investigador*>::const_iterator iteradorInv;
		for (iteradorInv = investigadores.begin(); iteradorInv != investigadores.end(); ++iteradorInv) {
			Investigador* investigador = *iteradorInv;
			cout << investigador->toString() << endl;
		}
}

void parte_g() {
  Investigador* carla = coleccion_getInvestigador("0000-0003-1234-5678");
  Investigador* alberto = coleccion_getInvestigador("0000-0001-8765-4321");
  Publicacion* pub1 = coleccion_getPublicacion("10.1234/abc123");
  Publicacion* pub2 = coleccion_getPublicacion("10.4567/jkl012");
  Publicacion* pub3 = coleccion_getPublicacion("10.5678/mno345");
  Publicacion* pub4 = coleccion_getPublicacion("10.3456/ghi789");
  Publicacion* pub5 = coleccion_getPublicacion("10.2345/def456");

  // Relaciones de Carla Oliveri, 
  carla->agregarPublicacion(pub1); // seteandole a los investigadores las publicaciones
  pub1->agregarAutor(carla); // seteandole la publicacion a carla

  carla->agregarPublicacion(pub2);
  pub2->agregarAutor(carla);

  carla->agregarPublicacion(pub3);
  pub3->agregarAutor(carla);

  carla->agregarPublicacion(pub4);
  pub4->agregarAutor(carla);

  // Relaciones de Alberto Santos
  alberto->agregarPublicacion(pub1);
  pub1->agregarAutor(alberto);

  alberto->agregarPublicacion(pub5);
  pub5->agregarAutor(alberto);

  alberto->agregarPublicacion(pub2);
  pub2->agregarAutor(alberto);
}

void parte_h() {
	Investigador* carla = coleccion_getInvestigador("0000-0003-1234-5678");
	std::set<std::string> publicaciones = carla->listarPublicaciones(DTFecha(10,12,2023), "UML");
  std::set<std::string>::const_iterator iterador;
	for (iterador = publicaciones.begin(); iterador != publicaciones.end(); ++iterador) {
		std::string publicacion = *iterador;
		cout << publicacion << endl;
	}
}


void parte_i() { // Eliminar publicación
    std::string doi = "10.1234/abc123";
    std::list<Publicacion*>::iterator it = publicaciones.begin();

    while (it != publicaciones.end()) {
        std::list<Publicacion*>::iterator temp = it++; // Guardar iterador actual y avanzar
        Publicacion* publicacion = *temp;
        
        if (publicacion->getDOI() == doi) {
            coleccion_eliminarPublicacion(publicacion); // Primero eliminar de otros contenedores
            publicaciones.erase(temp); // Luego eliminar de la lista
        }
    }

}



void parte_j(){
	Investigador* carla = coleccion_getInvestigador("0000-0003-1234-5678");
	std::set<std::string> publicaciones = carla->listarPublicaciones(DTFecha(1,1,2020), "UML");
  std::set<std::string>::const_iterator iterador;
	for (iterador = publicaciones.begin(); iterador != publicaciones.end(); ++iterador) {
		std::string publicacion = *iterador;
		cout << publicacion << endl;
	}
}

void parte_k(){
  imprimirPublicaciones(publicaciones);
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
