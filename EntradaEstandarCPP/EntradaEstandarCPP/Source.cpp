#include <iostream>
#include <string>



int main() {
	std::string nombre;
	std::string pariente;
	int edad;
	int edadp;

	std::cout << "Escribe tu nombre: ";
	std::cin >> nombre;
	std::cout << "ingresa tu edad: ";
	std::cin >> edad;

	std::cout << "Escribe el nombre de un parient: ";
	std::cin >> pariente;
	std::cout << "ingresa la edad de " << pariente << " :";
	std::cin >> edadp;


	std::cout << "Hola ";
	std::cout << nombre;
	std::cout << ", es un gusto conocerte a tus ";
	std::cout << edad;
	std::cout << " annos de edad";
	std::cout << ", tambien es un gusto conocer a tu pariente ";
	std::cout << pariente;
	std::cout << " que tiene ";
	std::cout << edad;
	std::cout << " annos de edad.";

}