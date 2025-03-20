// Implementacion clase Libro

#include <set>
#include <string>

#include "../include/Libro.h"

Libro::Libro(string editorial, set<string> palabrasDestacadas) {
  this->editorial = editorial;
  this->palabrasDestacadas = palabrasDestacadas;
}

using namespace std;