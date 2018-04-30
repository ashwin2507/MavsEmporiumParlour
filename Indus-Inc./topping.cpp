#include "topping.h"
#include <stdexcept>

Topping::Topping(std::string name, std::string description, double cost, double price,
              int amount) :
    Item(name, description, cost, price), _amount{amount} { }
std::string Topping::type() {return "Topping";}
int Topping::amount() {return _amount;}
void Topping::_set_amount(int amount) {
    if (0 < amount && amount < 5) _amount = amount;
    else throw std::runtime_error("Invalid topping amount");
}