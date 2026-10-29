//A professora Helena não consegue corrigir as provas e lançar as notas por causa das artes do Joãozinho. Pediu então que você fizesse
//um programa pra ela lançar as notas e calcular a média de cada aluno automaticamente.

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
	int N; //número de alunos
	string nm[100]; //nome do aluno
	double N1[100], N2[100], N3[100], N4[100]; //notas 1, 2, 3 e 4
	double md[100]; //média
	int i; //indice
	
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cin.ignore();
		getline(cin, nm[i]);
		cin >> N1[i] >> N2[i] >> N3[i] >> N4[i];
		md[i] = (N1[i] + 2 * N2[i] + 3 * N3[i] + 4 * N4[i]) / 10;
	}
	for(i = 0; i < N; i++)
	{
		cout << fixed << setprecision(2);
		cout << nm[i] << ": " << md[i] << endl;
	}
	return 0;
}