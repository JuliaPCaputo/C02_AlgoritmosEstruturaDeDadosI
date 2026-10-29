//Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

#include <iostream>
using namespace std;
int main()
{
	int cont, s = 0, x; //contador, soma, valores inseridos
	for(cont = 1; cont <= 5; cont++)
	{
		cin >> x;
		if(x % 2 == 0)
			s = s + 1;
	}
	cout << s << " valores pares" << endl;
	return 0;
}