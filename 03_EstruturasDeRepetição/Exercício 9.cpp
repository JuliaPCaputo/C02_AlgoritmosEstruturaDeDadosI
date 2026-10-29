//Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto,
//escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação
//sem escrever mensagem alguma).

#include <iostream>
using namespace std;
int main()
{
	double x, y;
	while(x != 0 && y != 0)
	{
		cin >> x >> y;
		if(x > 0 && y > 0)
			cout << "Primeiro quadrante" << endl;
		else if(x < 0 && y > 0)
			cout << "Segundo quadrante" << endl;
		else if(x < 0 && y < 0)
			cout << "Terceiro quadrante" << endl;
		else if(x > 0 && y < 0)
			cout << "Quarto quadrante" << endl;
	}
	return 0;
}