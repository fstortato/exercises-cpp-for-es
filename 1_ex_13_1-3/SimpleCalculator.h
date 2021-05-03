/* File SimpleCalculator.h

Felipe de Souza Tortato <fstortato@gmail.com>

23/03/2017

Description: Header definition of class SimpleCalculator

*/

#include <iostream>
using namespace std;

#include <string>

struct arrayOfOperands {
	float operand1;
	float operand2;
};

class SimpleCalculator {
private:
	char operationType;
	string operationTypeName = "";
	arrayOfOperands operandsArray;
public:
	float calculate();
	void setOperands(arrayOfOperands);
	void setOperationType(char);
	char getOperationType();
	arrayOfOperands getOperands();
	string getOperationTypeName();
};