#include "scoop.h"

Scoop::Scoop(std::string name, std::string description, double cost, double price)
      : Item(name, description, cost, price) { }
std::string Scoop::type() {return "Scoop";}