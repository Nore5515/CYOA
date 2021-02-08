#include <iostream>
#include "Room.h"


void Interactable::setName(std::string newName) {
	name = newName;
}

std::string Interactable::getName() {
	return name;
}