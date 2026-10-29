//Faça uma função que receba a altura h em metros, e o sexo de uma pessoa e retorne o seu peso ideal. Para homens, o peso ideal é dado por:
//peso ideal = 72.7 x h - 58 e, para mulheres, peso ideal = 62.1 x h - 44.7 A função deve ter o seguinte cabeçalho:
//float ideal(float h, char sexo)

#include <iostream>
#include <iomanip>
using namespace std;

float ideal(float h, char sexo) //função de peso ideal
{
	double P; //resultado do cálculo de peso
	if(sexo == 'M')
		P = (72.7 * h) - 58;
	if(sexo == 'F')
		P = (62.1 * h) - 44.7;
	return P;
}

int main()
{
	double h; //altura
	char sexo; //sexo da pessoa a ser avaliada
	double P; //peso
	
	do{
		cin >> h;
	}while(h < 0 || h > 3);
	
	do{
		cin >> sexo;
	}while (sexo != 'M' && sexo != 'F');
	
	P = ideal(h, sexo);
	
	cout << fixed << setprecision(2);
	cout << "Peso ideal = " << P << " kg" << endl;
	
	return 0;
}