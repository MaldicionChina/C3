#ifndef FUNTIONARRAY_H 
#define FUNTIONARRAY_H 

#include <array>

template<class T,int n>
class functionArray
{
	public:
	bool secuencial(std::array<T,n>& busqueda ,T& dato,int inicio,int fin);
	/*bool binomial(std::array<T,n>& busqueda ,T& dato,int inicio,int fin);*/
};
#endif
