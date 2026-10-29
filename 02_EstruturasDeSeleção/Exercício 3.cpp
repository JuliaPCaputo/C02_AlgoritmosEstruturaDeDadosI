//Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
//A seguir, calcule e mostre o valor da conta a pagar.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int C, Q;
	double P;
	cin >> C >> Q;
	if(C == 1)
		P = Q * 4;
	else if(C == 2)
		P = Q * 4.5;
	else if(C == 3)
		P = Q * 5;
	else if(C == 4)
		P = Q * 2;
	else if(C == 5)
		P = Q * 1.5;
	cout << fixed << setprecision(2);
	cout << "Total: R$ " << P << endl;
	return 0;
}