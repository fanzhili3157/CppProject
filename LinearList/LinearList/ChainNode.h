#pragma once
template<class T>
class ChainNode
{
	T element;
	ChainNode<T>* next;

	ChainNode() {}
	ChainNode(const T& element)
	{
		this->element = element;
	}
	ChainNode(const T& element, ChainNode<T>* next)
	{
		this->element = element;
		this->next = next;
	}
};

