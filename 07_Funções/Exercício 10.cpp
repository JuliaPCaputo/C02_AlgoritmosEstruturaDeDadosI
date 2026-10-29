//Usando a função delta desenvolvida anteriormente, faça uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma
//equação do segundo grau (ax2+bx+c=0), calcule e retorne as suas raízes. Esta função deve ter o seguinte cabeçalho:
//int calc_raizes(float a, float b, float c, float &x1, float &x2). Esta função deve retornar 0 se existirem raízes reais, e 1 caso contrário.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	float delta; //valor de delta
	delta = pow(b, 2) - (4 * a * c);
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	if((2 * a) == 0)
		return 1;
	else if(delta < 0)
		return 1;
	else
		return 0;
}

int main()
{
	float a, b, c; //coeficientes da equação
	float x1, x2; //raízes da equação
	
	do{
		cin >> a;
	}while(a == 0);
	
	cin >> b >> c;
	calc_raizes(a, b, c, x1, x2);
	
	if(calc_raizes(a, b, c, x1, x2) == 1)
	{
		cout << "Impossivel calcular" << endl;
	}
	
	cout << fixed << setprecision(5);
	
	if(calc_raizes(a, b, c, x1, x2) == 0)
	{
		if(x1 > x2)
		{
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		else if(x1 == x2)
		{
			cout << "x = " << x1 << endl;
		}
		else
		{
			cout << "x1 = " << x2 << endl;
			cout << "x2 = " << x1 << endl;
		}	
	}
	return 0;
}