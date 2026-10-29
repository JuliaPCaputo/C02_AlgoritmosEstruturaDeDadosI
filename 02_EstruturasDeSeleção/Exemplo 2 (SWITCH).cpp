#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese")
	double n1, n2, n3, md;
	int op;
	cout << "Digite os valores para A, B e C: ";
	cin >> n1 >> n2 >> n3;
	cout << "Digite a opção 1 (média ponderada) ou 2 (média simples): ";
	cin >> op;
	switch(op)
	{
		case 1: md = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
			cout << md << endl;
			break;
		case 2: md = (n1 + n2 + n3) / 3;
			cout << md << endl;
			break;
		default: cout << "Opção inválida." << endl;
	}
}