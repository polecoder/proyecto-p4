# Variables
GXXFLAGS = -Wall -Wextra -std=c++98

# Principal
build: main.cpp ArticuloRevista.o DTFecha.o DTRefer.o Investigador.o Libro.o PaginaWeb.o Publicacion.o
	g++ $(GXXFLAGS) -o main src/ArticuloRevista.cpp DTFecha.o Publicacion.o Investigador.o

# Objetos
ArticuloRevista.o: src/ArticuloRevista.cpp include/ArticuloRevista.h DTFecha.o Publicacion.o Investigador.o
	g++ $(GXXFLAGS) -c -o ArticuloRevista.o src/ArticuloRevista.cpp DTFecha.o Publicacion.o Investigador.o

DTFecha.o: src/DTFecha.cpp include/DTFecha.h
	g++ $(GXXFLAGS) -c DTFecha.o src/DTFecha.cpp

DTRefer.o: src/DTRefer.cpp include/DTRefer.h DTFecha.o
	g++ $(GXXFLAGS) -c -o DTRefer.o src/DTRefer.cpp DTFecha.o

Investigador.o: src/Investigador.cpp include/Investigador.h Publicacion.o
	g++ $(GXXFLAGS) -c -o Investigador.o src/Investigador.cpp Publicacion.o

Libro.o: src/Libro.cpp include/Libro.h Publicacion.o DTFecha.o Investigador.o
	g++ $(GXXFLAGS) -c -o Libro.o src/Libro.cpp Publicacion.o DTFecha.o Investigador.o

PaginaWeb.o: src/PaginaWeb.cpp include/PaginaWeb.h Publicacion.o DTFecha.o Investigador.o
	g++ $(GXXFLAGS) -c -o PaginaWeb.o src/PaginaWeb.cpp Publicacion.o DTFecha.o Investigador.o

Publicacion.o: src/Publicacion.cpp include/Publicacion.h DTRefer.o DTFecha.o Investigador.o
	g++ $(GXXFLAGS) -c -o Publicacion.o src/Publicacion.cpp DTRefer.o DTFecha.o Investigador.o