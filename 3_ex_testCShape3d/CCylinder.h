#pragma once

#include "CShape3d.h"

template <class T>
class CCylinder : public CShape3d<T> {
private:
	T raio, altura;
public:
	CCylinder(T r, T h);
	T volume();
};

template <typename T>
CCylinder<T>::CCylinder(T r, T h) {

	raio = r;
	altura = h;

}

template <typename T>
T CCylinder<T>::volume() {

	return PI*raio*raio*altura;

}