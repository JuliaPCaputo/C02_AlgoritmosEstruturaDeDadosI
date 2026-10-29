//Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o
//algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double n1, n2, md; //nota 1 e 2, média
	do
	{
		cin >> n1;
	}while(n1 < 0 || n1 > 10);
	cin >> n2;
	do
	{
		cin >> n2;
	}while(n2 < 0 || n2 > 10);
	cout << fixed << setprecision(2);
	md = (n1 + n2) / 2;
	cout << "Média = " << md << endl;
	return 0;
}