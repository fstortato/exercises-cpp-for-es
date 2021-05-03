#pragma once

#include <iostream>
using namespace std;

class Float {
private:
	
	//friend ostream& operator+ (const Float& a, const Float& b);
	//friend ostream& operator- (const Float& a, const Float& b);
	//friend ostream& operator* (const Float& a, const Float& b);
	//friend ostream& operator/ (const Float& a, const Float& b);
	friend ostream& operator= (const Float& a, const Float& b);

};