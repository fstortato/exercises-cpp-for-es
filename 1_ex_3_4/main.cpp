#include <iostream>
using namespace std;

int main() {

	int matriz[100][100];
	int * mptr;
	
	mptr = &matriz[0][0];

	for (int i = 0; i < 10000; i++) {

		*(mptr+i) = i+1;
		cout << *(mptr + i);

	}

	system("pause");
	return (0);
}