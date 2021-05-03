#pragma once

#define PI 3

#include <iostream>
using namespace std;

template <class T>
class CShape3d {
public: 
	virtual T volume() = 0;
};