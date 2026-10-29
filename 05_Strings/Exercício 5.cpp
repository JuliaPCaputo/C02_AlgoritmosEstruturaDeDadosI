//Com a onda de "gatos" invadindo o futebol, você foi contratado pelo Corinthians para recadastrar todos os jogadores do clube.
//Faça um programa que leia o nome e a idade de cada jogador, e mostre somente aqueles que são maiores de idade.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N; //número de jogadores a serem avaliados
	int i, soma = 0; //indice do vetor, soma dos maiores de idade
	string nm[100]; //nome
	int id[100]; //idade
	
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cin.ignore();
		getline(cin, nm[i]);
		cin >> id[i];
	}
	for(i = 0; i < N; i++)
	{
		if(id[i] >= 18)
		{
			cout << nm[i] << " " << id[i] << endl;
			soma++;
		}
		if(soma == 0)
			cout << "Nenhum jogador com 18 anos ou mais" << endl;
	}
	return 0;
}