#pragma once

#include "CShape3d.h"

template <class T>
class CCone : public CShape3d<T> {
private:
	T raio, altura;
public:
	CCone(T r, T h);
	T volume();
};

template <typename T>
CCone<T>::CCone(T r, T h) {

	raio = r;
	altura = h;

}

template <typename T>
T CCone<T>::volume() {

	return PI*raio*raio*altura / 3;

}