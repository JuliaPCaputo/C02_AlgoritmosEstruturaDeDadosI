//Faça uma função que receba dois números inteiros e retorne a média geométrica deles, em um parâmetro passado por referência. O cabeçalho
//desta função deve ser: void media(int x, int y, float &m). Depois, faça um programa que leia dois números inteiros, e imprima na saída a
//média geométrica deles, calculada por esta função. A média geométrica é dada por X·Y-----v

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void media(int x, int y, float &m)
{
	m = sqrt(x * y);
	return;
}

int main()
{
	int x, y; //valores para a média
	float m; //média
	
	do {
		cin >> x;
	} while(x < 0);
	do {
		cin >> y;
	} while(y < 0);
	
	media(x, y, m);
	cout << fixed << setprecision(2);
	cout << "Media: " << m << endl;
	return 0;
}