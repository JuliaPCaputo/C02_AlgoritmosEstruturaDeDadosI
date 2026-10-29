//Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos).
//A seguir, mostre a quantidade de valores positivos digitados.

#include <iostream>
using namespace std;
int main()
{
	int cont, s = 0; //contador, soma
	double x; //número inserido
	for(cont = 1; cont <= 6; cont++)
	{
		cin >> x;
		if(x > 0)
			s = s + 1;
	}
	cout << s << " valores positivos" << endl;
	return 0;
}