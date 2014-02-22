// probarCountPointer.cpp
/** se utiliza la libreria countTime.hpp, para determin el tiempo 
 * que tarda un metodo en ejecutarse */
#include"../include/countTime.hpp"
#include<iostream>


int time()
{
	for(float i = 0; i < 200000; i++); 
	std::cout << "sali del for" << std::endl;
	return -1;
}

int main(void)
{
	double demora = 0;
	std::cout << "Dormiré mientras se eje" << std::endl;
	demora = count(time); // solo se envia el nombre de la función !!!!!!!!!!!!
	std::cout << "Dormi"<< demora << " milisegundos" << std::endl;

}
