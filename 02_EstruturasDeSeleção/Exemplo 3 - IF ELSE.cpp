//Escreva um programa que leia dois valores numéricos x e y quaisquer e mostre, se possível, o valor da função
//f(x,y) = v(x-y) / v(x+y) ; senão, mostre a mensagem “Calculo impossível”.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, f;
	cin >> x >> y;
	if(x - y < 0 || x + y <= 0)
		cout << "Calculo impossivel" << endl;
	else{
		f = sqrt(x - y) / sqrt(x + y);
		cout << f << endl;
		}
	return 0;
}