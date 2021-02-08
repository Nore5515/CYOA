#include <iostream>
#include <string>

#include "Room.h"

int main() {
	
	std::cout << "Hello World!\n";

	Interactable i;

	i.setName("Toot");
	std::cout << i.getName();

	return 0;
}











/*
std::string response;
std::cin >> response;

std::cout << response;

if (response == "Hello") {
	std::cout << "Hi there!";

Room<std::string> r;
std::cout << r.name;
}*/
