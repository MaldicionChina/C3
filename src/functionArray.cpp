// Busqueda Secuencial
// Estoy aprendiendo a utilizar Templates
#include <array>
#include <functionArray.hpp>

template <class T, int n>
bool secuencial(std::array<T,n> busqueda ,T dato,int inicio,int fin){
	
	int contador = 0; // Variable contador  veces que está el dato buscado en el array

	for(int i=0; i<n; i++)
	{
		if(dato==busqueda[i])
		{
			//contador = contador + 1;
			return true;
		}
	}
	//return (contador>0) ? true : false;
	return false;
}

template <class T, int n>
bool binomial(std::array<T,n> busqueda,T dato,int inicio,int fin){
	
	bool res; // respuesta del algoritmo

	if(inicio<=fin)
	{
		int mitad = ( inicio + fin )/2;
		if(dato < busqueda)
		{
			res = functionArray<T,n>::binomial(busqueda,dato,inicio,mitad-1);
		}
		else if(dato > busqueda)
		{
			res = functionArray<T,n>::binomial(busqueda,dato,mitad+1,fin);
		}
		else
		{
		   res = true;
		}
	}
	else
	{
	res = false;
	}
	
	return res;
}

