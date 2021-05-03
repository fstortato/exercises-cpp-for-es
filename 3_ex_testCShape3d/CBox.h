#pragma once

#include "CShape3d.h"

template <class T>
class CBox : public CShape3d<T> {
private:
	T aresta1, aresta2, aresta3;
public:
	CBox(T a1, T a2, T a3);
	T volume();
};

template <class T>
CBox<T>::CBox(T a1, T a2, T a3) {

	aresta1 = a1;
	aresta2 = a2;
	aresta3 = a3;

}

template <class T>
T CBox<T>::volume() {

	return aresta1*aresta2*aresta3;

}