/* File main.cpp

Felipe de Souza Tortato <fstortato@gmail.com>

23/03/2017

Description: Main function of the project of a simple calculator

*/

#include "SimpleCalculator.h"

#define ó (char)162
#define ç (char)135
#define ã (char)198
#define á (char)160

int main() {

	SimpleCalculator calculator1;

	char auxcod;
	float auxop1, auxop2;
	char *addressOpT;
	arrayOfOperands auxOperandsArray;

	cout << "Insira o operando 1 e pressione Enter:\n";
	cin >> auxop1;
	cout << "\n";

	cout << "Insira o operando 2 e pressione Enter:\n";
	cin >> auxop2;
	cout << "\n";

	auxOperandsArray = { auxop1, auxop2 };

	calculator1.setOperands(auxOperandsArray);

	cout << "Insira o c" << ó << "digo da opera" << ç << ã << "o e pressione Enter: (a: adi" << ç << ã << "o; s: subtra" << ç << ã << "o; m: multiplica" << ç << ã << "o; d: divis" << ã << "o)\n";
	cin >> auxcod;
	cout << "\n";
	
	calculator1.setOperationType(auxcod);

	cout << calculator1.getOperationTypeName();
	cout << ": ";
	cout << calculator1.calculate();
	cout << "\n\n";

	system("pause");

	return 0;
}
