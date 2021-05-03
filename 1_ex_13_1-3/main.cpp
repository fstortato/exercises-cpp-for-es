/* File main.cpp

Felipe de Souza Tortato <fstortato@gmail.com>

23/03/2017

Description: Main function of the project of a simple calculator

*/

#include "SimpleCalculator.h"

#define � (char)162
#define � (char)135
#define � (char)198
#define � (char)160

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

	cout << "Insira o c" << � << "digo da opera" << � << � << "o e pressione Enter: (a: adi" << � << � << "o; s: subtra" << � << � << "o; m: multiplica" << � << � << "o; d: divis" << � << "o)\n";
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
