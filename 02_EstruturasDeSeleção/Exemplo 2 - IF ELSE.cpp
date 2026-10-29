//Exemplo 2, usando IF e ELSE
//Escreva um programa que leia dois números A e B quaisquer, e mostre uma mensagem indicando se “A igual a B”,
//se “A maior que B”, ou “A menor que B”.

#include <iostream>
using namespace std;
int main()
{
	double A, B;
	cin >> A >> B;
	if(A == B)
		cout << "A igual a B" << endl;
	else if(A > B)
		cout << "A maior que B" << endl;
		else
			cout << "A menor que B" << endl;
	return 0;
}