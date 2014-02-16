// burbujaVector.cpp                                                                                                                                                                  
// Implementación del método de ordenamiento burbuja.                                                                                                                                 
#include <vector>                                                                                                                                                                     
#include <chrono>                                                                                                                                                                     
#include <iostream>                                                                                                                                                                   
#include <random>                                                                                                                                                                     

using namespace std;                                                                                                                                                                  
                                                                                                                                                                                      
int main()                                                                                                                                                                            
{                                                                                                                                                                                     
  int n, c, d, swap;                                                                                                                                                                  
                                                                                                                                                                                      
  chrono::time_point<chrono::system_clock> start, end; // Variables de la clase chrono que almacenan el tiempo del sistema [ system_clock ]                                           
  default_random_engine generador; // Generador de la clase random.                                                                                                                   
  generador.seed(345); // semilla para generar los mismo números                                                                                                                      
  uniform_int_distribution<int> distribucion(-1000,1000);// Se elige la distribución de los datos aleatorios, en este caso una distribución normal entre -1000 y 1000                 
                                                                                                                                                                                      
  cout << "Entre el número de elementos" << endl;                                                                                                                                     
  cin >> n;                                                                                                                                                                           
                                                                                                                                                                                      
  vector<int> myVector(n);                                                                                                                                                            
                                                                                                                                                                                      
  for (c = 0; c < n; c++){                                                                                                                                                            
  myVector[c] = distribucion(generador); // se generan números aleatorios y se almacenan en el vector                                                                                 
  cout << myVector[c] << endl; // se imprimen por consola los datos generados                                                                                                         
  }                                                                                                                                                                                   


  start = std::chrono::system_clock::now(); // Se captura el tiempo acutual del sistema antes de realizar el ordenamiento                                                             
  for (c = 0 ; c < ( n - 1 ); c++)                                                                                                                                                    
  {                                                                                                                                                                                   
    for (d = 0 ; d < n - c - 1; d++)                                                                                                                                                  
    {                                                                                                                                                                                 
      if (myVector[d] >  myVector[d+1])                                                                                                                                               
      {                                                                                                                                                                               
        swap       = myVector[d];                                                                                                                                                     
        myVector[d]   = myVector[d+1];                                                                                                                                                
        myVector[d+1] = swap;                                                                                                                                                         
      }                                                                                                                                                                               
    }                                                                                                                                                                                 
  }                                                                                                                                                                                   
  end = chrono::system_clock::now();// Se captura el tiempo actual del sistema luego de realizar el ordenamiento                                                                      
                                                                                                                                                                                      
  cout << "Lista ordenada en orden ascendente:"<<endl;                                                                                                                                
                                                                                                                                                                                      
  for ( c = 0 ; c < n ; c++ )                                                                                                                                                         
     cout << myVector[c] << endl; // se imprimen por consola los datos organizados                                                                                                    
                                                                                                                                                                                      
  double elapsed_time = chrono::duration_cast<chrono::milliseconds> (end-start).count(); // se hace la diferencie entre el tiempo final del sistema y el tiempo inicial, se almacena en milisegundos                                                                                                                                                                        
                                                                                                                                                                                      
   cout << "Tiempo utilizado: " << elapsed_time << "ms\n";                                                                                                                            

  return 0;                                                                                                                                                                           
} 
