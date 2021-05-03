/*
* file: main.cpp
*
* Descricao: Programa de teste para a Classe.
*
* Saida do programa:
*
* Volume do paralelograma: 730.17
* Volume do cone: 5.12707
* Volume do cilindro: 20.3575
*
*
* Autor: Rob McGregor
* Data: ??/??/??
*
* Ultima Alteracao: Eduardo Augusto Bezerra
* Data da ultima alteracao: 29/05/2003
*
*/

#include "CShape3d.h"
#include "CBox.h"
#include "CCone.h"
#include "CCylinder.h"

int main() {
	CShape3d <int> * shape;

	// Um ponteiro para CShape3d assume a forma de um CBox
	//

	shape = new CBox<int> (10, 12, 6); 
	cout << "Volume do paralelogramo: " << shape->volume() << endl;
	delete shape;

	// Um ponteiro para CShape3d assume a forma de um CCone
	//
	shape = new CCone<int>(1, 3);
	cout << "Volume do cone: " << shape->volume() << endl;
	delete shape;

	// Um ponteiro para CShape3d assume a forma de um CCylinder
	//
	shape = new CCylinder<int>(1, 4);
	cout << "Volume do cilindro: " << shape->volume() << endl;
	delete shape;

	cout << endl << endl;
	return 0;
}
