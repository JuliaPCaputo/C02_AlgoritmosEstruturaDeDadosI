//Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau ax2+bx+c=0 e retorne o
//valor do delta, que é dado por b2-4ac. O cabeçalho desta função deve ser: float calc_delta(float a, float b, float c)

#include <iostream>
#include <cmath>
using namespace std;

float calc_delta(float a, float b, float c)
{
	float delta; //valor de delta
	delta = pow(b, 2) - (4 * a * c);
	return delta;
}

int main()
{
	float a, b, c;
	
	do{
		cin >> a;
	}while(a == 0);
	
	cin >> b >> c;
	
	cout << "delta = " << calc_delta(a, b, c) << endl;
	return 0;
}