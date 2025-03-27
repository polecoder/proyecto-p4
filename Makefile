# Variables
GXXFLAGS = -std=c++98

# Principal
build: main.cpp ArticuloRevista.o DTFecha.o DTRefer.o Investigador.o Libro.o PaginaWeb.o Publicacion.o utils.o
	g++ $(GXXFLAGS) -o main main.cpp ArticuloRevista.o DTFecha.o DTRefer.o Investigador.o Libro.o PaginaWeb.o Publicacion.o utils.o

# Objetos
ArticuloRevista.o: src/ArticuloRevista.cpp include/ArticuloRevista.h DTFecha.o Publicacion.o Investigador.o
	g++ $(GXXFLAGS) -c -o ArticuloRevista.o src/ArticuloRevista.cpp

DTFecha.o: src/DTFecha.cpp include/DTFecha.h
	g++ $(GXXFLAGS) -c -o DTFecha.o src/DTFecha.cpp

DTRefer.o: src/DTRefer.cpp include/DTRefer.h DTFecha.o
	g++ $(GXXFLAGS) -c -o DTRefer.o src/DTRefer.cpp

Investigador.o: src/Investigador.cpp include/Investigador.h Publicacion.o
	g++ $(GXXFLAGS) -c -o Investigador.o src/Investigador.cpp

Libro.o: src/Libro.cpp include/Libro.h Publicacion.o DTFecha.o Investigador.o
	g++ $(GXXFLAGS) -c -o Libro.o src/Libro.cpp

PaginaWeb.o: src/PaginaWeb.cpp include/PaginaWeb.h Publicacion.o DTFecha.o Investigador.o
	g++ $(GXXFLAGS) -c -o PaginaWeb.o src/PaginaWeb.cpp

Publicacion.o: src/Publicacion.cpp include/Publicacion.h DTRefer.o DTFecha.o Investigador.o
	g++ $(GXXFLAGS) -c -o Publicacion.o src/Publicacion.cpp

utils.o: src/utils.cpp include/utils.h Publicacion.o
	g++ $(GXXFLAGS) -c -o utils.o src/utils.cpp