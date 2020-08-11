#pragma once
#include "Linear.h"
#include "ChainNode.h"

template<class T>
class Chain : public Linear<T>
{
public:
	Chain(int initialCapacity = 10);
	Chain(const Chain<T>&);
	~Chain();

	bool empty() const { return listSize == 0; }

	int size() const { return listSize; }

	T& get(int theIndex) const;

	int indexOf(const T& theElement) const;

	void erase(int theIndex);

	void insert(int theIndex, const T& theElement);

protected:
	void checkIndex(int theIndex) const;
	ChainNode<T>* firstNode;
	int listSize;


};

