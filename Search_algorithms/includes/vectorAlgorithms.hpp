//#include <iostream>
#include <vector>

template <class T>
class vectorAlgorithms
{
	/*! @brief This function template searches over a std::vector<T> by using the serial search algorithm
 	*	@param std::vector<T> Input vector to be searched on
 	*	@param tTarget The object to be searched on Input vector
 	*	@ref iCounts	Stores the counts of iTarget on the Input vector
 	*/
	bool isOnTheVector(std::vector<T> vVector,T tTarget);
};

template <class T>
bool isOnTheVector(std::vector<T> vVector,T tTarget,int& iCounts)
{
//	int iCounts(0);

	for(int i=0;i<vVector.size();i++)
	{
		if(vVector[i]==tTarget)
		{
			iCounts+=1;
		}
	}
	
	if(iCounts > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


