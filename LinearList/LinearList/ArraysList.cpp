#include "ArraysList.h"
#include <exception>
template<class T>
ArraysList<T>::ArraysList(int initialCapacity)
{
	if (initialCapacity < 1)
	{
		std::ostream s;
		s << "Initial capacity = " << initialCapacity;
		throw "error";
	}
	arrayLength = initialCapacity;
	element = new T(arrayLength);
	listSize = 0;
}

template<class T>
ArraysList<T>::ArraysList(const ArraysList<T>& theList)
{
	arrayLength = theList.arrayLength;
	listSize = theList.listSize;
	element = new T(arrayLength);
	

}
