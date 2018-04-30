#include "flavor.h"

void Flavor::add_flavor(string flav) {
	flavors.push_back(flav);
}

string Flavor::flavor_to_string(int flavor_index) {
	return flavors[flavor_index];
}

int Flavor::num_of_flavors() {
	return flavors.size();
}