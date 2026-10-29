#include <iostream>
using namespace std;
int main()
{
	float n1, n2;
	int op;
	cout << "Digite os dois numeros: ";
	cin >> n1 >> n2;
	cout << "Digite a operacao: 1 p/ soma ou 2 p/ produto: ";
	cin >> op;
	switch(op)
	{
		case 1: cout << n1 + n2 << endl;
			break;
		case 2: cout << n1 * n2 << endl;
			break;
		default: cout << "Operacao invalida" << endl;
	}
	return 0;
}