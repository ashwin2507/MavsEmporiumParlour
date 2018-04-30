#include "item.h"

Item::Item(std::string name, std::string description, double cost, double price)
     : _name{name}, _description{description}, _cost{cost}, _price{price}, _quantity{0} { }
std::string Item::type() {return "Item";}
void Item::restock(int quantity) {_quantity  = quantity;}
void Item::consume(int quantity) {_quantity -= quantity;}
std::string Item::name() {return _name;}
std::string Item::description() {return _description;}
double Item::cost() {return _cost;}
double Item::price() {return _price;}
int Item::quantity() {return _quantity;}
// Gtk::Image photo() {return _photo;}