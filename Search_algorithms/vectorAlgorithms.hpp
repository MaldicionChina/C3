//#include <iostream>
#include <vector>

template <class T>/*
class vectorAlgorithms<T>
{
	bool isOnTheVector(std::vector<T> vVector,T tTarget);
};
*/
bool /*vectorAlgorithms<T>::*/isOnTheVector(std::vector<T> vVector,T tTarget,int& iCounts)
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


