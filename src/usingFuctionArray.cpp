// Utilizando busqueda secuencial
//

#include <array>
#include <functionArray.hpp>
#include <iostream>
//#include<ramdon>

int main(void)
{
		std::array<int,10> myArray;
		int inicio = 0;
		int fin = 9;
		int tamano = 10;
		int buscar;
		bool estaEnArray;
		
		std::cout << "Insertando valores..." << std::endl;

		for(int i = 0; i < tamano ; i++)
		{
			myArray[i] = tamano - i;
		}

		std::cout << "Ingrese el valor a buscar: " << std::endl;
		std::cin >> buscar;

	    estaEnArray = secuencial(myArray,buscar,inicio,fin);	

		if(estaEnArray)
		{
			std::cout << "El número se encuentra en el array" << std::endl;
		}
		else
		{
			std::cout << "El número no se encuentra en el array" << std::endl;
		}
}

