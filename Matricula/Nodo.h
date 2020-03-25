#ifndef NODO_H
#define NODO_H
#include <iostream>

template <class T>
class Nodo
{
	T* data;
	Nodo<T>* next;

public:

	Nodo(T*);
};
#endif