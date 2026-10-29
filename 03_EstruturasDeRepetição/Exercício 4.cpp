//Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int cont, N, p; //contador, valor inteiro inserido, potenciação
	cin >> N;
	for(cont = 1; cont >= 1 && cont <= N; cont++)
	{
		if(cont % 2 == 0)
		{
			p = pow(cont, 2);
			cout << fixed << setprecision(2);
			cout << cont << " ^ 2 = " << p << endl;	
		}		
	}
	return 0;
}