// Busqueda Secuencial
// Estoy aprendiendo a utilizar Templates
#include <array>

template <class T>
class functionArray<T>
{

bool secuencial(const std::array<T> *busqueda, T *dato, T inicio, T fin){
	
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

bool binomial(const std::array<T> *busqueda, T *dato, T inicio, T fin){
	
	bool res; // respuesta del algoritmo

	if(inicio<=fin)
	{
		int mitad = ( inicio + fin )/2;
		if(dato < busqueda)
		{
			res = binomial(busqueda,dato,inicio,m-1)
		}
		else if(dato > busqueda)
		{
			res = binomial(busqueda,dato,m+1,fin)
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

}

