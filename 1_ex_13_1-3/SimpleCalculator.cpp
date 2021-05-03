/* File SimpleCalculator.cpp

Felipe de Souza Tortato <fstortato@gmail.com>

23/03/2017

Description: Function definition of headers of class SimpleCalculator

*/

#include "SimpleCalculator.h"

#define ó (char)162
#define ç (char)135
#define ã (char)198
#define á (char)160

struct DivideByZero {
	char * message;
	DivideByZero(char *msg) {
		message = msg;
	}
};

DivideByZero mensagem("Error! Division by zero!");

float SimpleCalculator::calculate() {

	switch (operationType) {
	case 'a':
		return operandsArray.operand1 + operandsArray.operand2;
		break;
	case 's':
		return operandsArray.operand1 - operandsArray.operand2;
		break;
	case 'm':
		return operandsArray.operand1 * operandsArray.operand2;
		break;
	case 'd':
		
		try {
			if (operandsArray.operand2 == 0)
				throw mensagem;
				return operandsArray.operand1 / operandsArray.operand2;
		}
		catch (DivideByZero dbz) {
			cerr << dbz.message << endl;
			return 0;
		}
		break;
	default:
		cout << "Comando inv" << á << "lido!";
		return 0;
	}

}

void SimpleCalculator::setOperands(arrayOfOperands aOP) {

	operandsArray.operand1 = aOP.operand1;
	operandsArray.operand2 = aOP.operand2;
}

void SimpleCalculator::setOperationType(char opt) {

	operationType = opt;

	char auxString[40];

	char auxç[2] = { ç, '\0' };
	char auxã[2] = { ã, '\0' };
	strcpy_s(auxString, "Resultado da ");
	switch (operationType) {
	case 'a':
		strcat_s(auxString, "adi");
		strcat_s(auxString, auxç);
		strcat_s(auxString, auxã);
		strcat_s(auxString, "o");
		break;
	case 's':
		strcat_s(auxString, "subtra");
		strcat_s(auxString, auxç);
		strcat_s(auxString, auxã);
		strcat_s(auxString, "o");
		break;
	case 'm':
		strcat_s(auxString, "multiplica");
		strcat_s(auxString, auxç);
		strcat_s(auxString, auxã);
		strcat_s(auxString, "o");
		break;
	case 'd':
		strcat_s(auxString, "divis");
		strcat_s(auxString, auxã);
		strcat_s(auxString, "o");
		break;
	}

	operationTypeName = auxString;

}

char SimpleCalculator::getOperationType() {

	return operationType;

}

arrayOfOperands SimpleCalculator::getOperands() {

	return operandsArray;

}

string SimpleCalculator::getOperationTypeName() {

	return operationTypeName;

}