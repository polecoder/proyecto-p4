#include <iostream>
#include <list>
#include <map>

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
}

void parte_d(){
}

void parte_e(){
}

void parte_f(){
}

oid parte_g() {
    Investigador* carla = coleccion_getInvestigador("0000-0003-1234-5678");
    Investigador* alberto = coleccion_getInvestigador("0000-0001-8765-4321");

    Publicacion* pub1 = coleccion_getPublicacion("10.1234/abc123");
    Publicacion* pub2 = coleccion_getPublicacion("10.4567/jkl012");
    Publicacion* pub3 = coleccion_getPublicacion("10.5678/mno345");
    Publicacion* pub4 = coleccion_getPublicacion("10.3456/ghi789");
    Publicacion* pub5 = coleccion_getPublicacion("10.2345/def456");

    // Relaciones de Carla Oliveri
    carla->agregarPublicacion(pub1);
    pub1->agregarInvestigador(carla);

    carla->agregarPublicacion(pub2);
    pub2->agregarInvestigador(carla);

    carla->agregarPublicacion(pub3);
    pub3->agregarInvestigador(carla);

    carla->agregarPublicacion(pub4);
    pub4->agregarInvestigador(carla);

    // Relaciones de Alberto Santos
    alberto->agregarPublicacion(pub1);
    pub1->agregarInvestigador(alberto);

    alberto->agregarPublicacion(pub5);
    pub5->agregarInvestigador(alberto);

    alberto->agregarPublicacion(pub2);
    pub2->agregarInvestigador(alberto);
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
