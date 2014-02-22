//countTime.cpp
// está clase recibe un puntero a función para calcular el tiempo que está tarda en ejecutarse.

//#include<cstdarg> // esta libreria nos proporciona el macro para acceder a la lista de argumentos no declarados
#include <chrono> // 

//#define TIME_SEC seconds
//#define TIME_MILLISE milliseconds
//#define TIME_MIN minutes

using namespace std;

template <class T>
class countTime
{
	public:
		double count(T (&pointerFunction)(), T time);
};

template <class T>
double count(T (&pointerFunction)())
{
	std::chrono::time_point<chrono::system_clock> start, end; // Variables de la clase chrono que almacenan el tiempo del sistema [ system_clock ]                                           
	start = std::chrono::system_clock::now(); // Se captura el tiempo acutual del sistema antes de ejecutar el metodo
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	pointerFunction();		
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  	end = chrono::system_clock::now();// Se captura el tiempo actual del sistema luego de ejecutar el metodo 
	double elapsed_time = chrono::duration_cast<chrono::milliseconds> (end-start).count(); // se hace la diferencie entre el tiempo final del sistema 
																	// y el tiempo inicial, se almacena en milisegundos
	
	return elapsed_time;
}
