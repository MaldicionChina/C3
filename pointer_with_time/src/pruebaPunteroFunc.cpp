// Aprendiendo punteros a funciones
//

#include<iostream>

int contar(int num)
{
	for(int i = 0; i < num ; i ++)
{
	std::cout << "voy en ..." << i << std::endl;
	}
	return 1;

}

void recibir(int(*punteroFuncion)(int))
{
	std::cout << "esto como que funciona" << std::endl;
	
	punteroFuncion(10);

	std::cout << "esto como que funciona" << std::endl;
}

int main()
{
	std::cout << "Probando punteros a funciones" << std::endl;
	recibir(contar);
}
