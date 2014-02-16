//#ifndef FUNTIONARRAY_H 
//#define FUNTIONARRAY_H 

#include <array>

template<class T,size_t n>
class functionArray
{
	public:
	bool secuencial(std::array<T,n>& busqueda ,T& dato,int inicio,int fin);
	/*bool binomial(std::array<T,n>& busqueda ,T& dato,int inicio,int fin);*/
};

template <class T, size_t n>
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
//#endif
