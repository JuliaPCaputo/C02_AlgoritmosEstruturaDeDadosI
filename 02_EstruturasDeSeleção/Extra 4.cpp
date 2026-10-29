#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double n1, n2, r; //número 1, número 2 e resultado
	int op; //operação
	cout << "Informe o primeiro valor: ";
	cin >> n1;
	cout << "Informe o segundo valor: ";
	cin >> n2;
	cout << "Digite a operação desejada: (1)Adição; (2)Subtração; (3)Multiplicação; (4)Divisão: ";
	cin >> op;
	cout << fixed << setprecision(1);
	switch(op)
	{
		case 1: cout << n1 + n2 << endl;
			break;
		case 2: cout << n1 - n2 << endl;
			break;
		case 3: cout << n1 * n2 << endl;
			break;
		case 4: 
			if(op == 4 && n2 == 0)
				cout << "Erro" << endl;
			else
			{
				cout << n1 / n2 << endl;
			}
			break;
		default: cout << "Erro" << endl;
	}
	return 0;
}