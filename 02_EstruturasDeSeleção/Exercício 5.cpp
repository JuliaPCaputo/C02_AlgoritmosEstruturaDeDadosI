//Leia 3 valores A, B e C de ponto flutuante, correspondentes aos coeficientes de uma equação do segundo grau, e
//efetue o cálculo de suas raízes. Se não for possível calcular as raízes, mostre a mensagem correspondente
//“Impossivel calcular”; caso haja uma divisão por 0 ou raiz de numero negativo.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double A, B, C, D, R1, R2;
	cin >> A >> B >> C;
	D = pow(B, 2) - 4 * A * C;
	if(D < 0 || A == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		R1 = (-B + sqrt(D)) / (2 * A);
		R2 = (-B - sqrt(D)) / (2 * A);
		cout << fixed << setprecision(5);
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}
	return 0;
}