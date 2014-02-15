#include <iostream>
#include <chrono>
#include <random>
#include "vectorAlgorithms.hpp"

int main(void)
{
	std::vector<int> datos;
	int a_generar,generado;
	int cuantos(0);
	int elemento(0);
	bool bResult;

	std::chrono::time_point<std::chrono::system_clock> t_start,t_end;

	std::default_random_engine generator;
	std::poisson_distribution<int> distribution(30);

	std::cout << "Cuantas entradas genero en el vector? : " << std::endl;
	std::cin >> a_generar;


	for(int i=0;i<a_generar;i++)
	{
		generado = distribution(generator);
		std::cout << generado << std::endl;
		datos.push_back(generado);
	}
	
	std::cout << " Ingrese un numero entero : ";
	std::cin >> elemento;
	
	t_start = std::chrono::system_clock::now();

	bResult = isOnTheVector(datos,elemento,cuantos);

	t_end = std::chrono::system_clock::now();

	if(bResult == true )
	{
		std::cout << "\t[y] El elemento " << elemento << " esta en el vector" << std::endl;
	}
	else
	{
		std::cout << "\t[n] El elemento " << elemento << " No esta en el vector" << std::endl;
	}

	std::cout << " La busqueda tomo " << std::chrono::duration_cast<std::chrono::milliseconds> (t_end-t_start).count() << " ms" << std::endl;


	return 0;
}
