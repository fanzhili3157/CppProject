#pragma once
#include "Linear.h"
template<class T>
class ArraysList : public Linear<T>
{
public:
	ArraysList(int initialCapacity = 10);
	ArraysList(const ArraysList<T>&);
	~ArraysList() {
		delete[] element;
	}

	bool empty() const{	return listSize == 0;}
	
	int size() const { return listSize; }

	T& get(int theIndex) const;

	int indexOf(const T& theElement) const;

	void erase(int theIndex);

	void insert(int theIndex, const T& theElement);

	int capacity() const { return arrayLength; }


protected:
	void checkIndex(int theIndex) const;
	T* element;
	int arrayLength;
	int listSize;
};

