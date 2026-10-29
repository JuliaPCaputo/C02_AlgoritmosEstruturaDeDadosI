//Um Padawan se referia a um adolescente sensível à Força que treinava na Ordem Jedi para se tornar um Cavaleiro Jedi.Depois de completar
//"os testes" para se tornar Jedi, um Padawan seria promovido para a patente de Cavaleiro. Cada teste vale uma certa quantidade de pontos,
//e eles sempre competiam entre si para ver quem tinha mais pontos acumulados. Para monitorar os Padawans, o mestre Yoda pediu que você
//fizesse um programa que armazenasse o nome de cada Padawan e o seu número de pontos, e mostrasse o Padawan com o maior número de pontos.
//Ainda, o mestre solicitou que você mostrasse a média de pontos de todos os Padawans pra ele poder comparar.

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct pontos
{
	string nome; //nome do padawan
	int pt; //pontos feitos pelo padawan
};

int main()
{
	int i; //indice
	double soma = 0.0; //soma dos pontos
	double md; //média
	string pmp; //padawan com mais pontos
	int mp = 0; //maior pontuação
	int N; //número a ser cadastrado
	pontos info[1000]; //informações dos padawans, do tipo pontos

	do
	{
		cin >> N;
	}while(N < 0 || N > 1000);
	
	cin.ignore();
	
	for(i = 0; i < N; i++)
	{
		getline(cin, info[i].nome);
		do{
		    cin >> info[i].pt;
		}while(info[i].pt < 0);
		cin.ignore();
		soma += info[i].pt;
		if(info[i].pt > mp)
		{
			mp = info[i].pt;
			pmp = info[i].nome;
		}
	}
	
	md = soma / N;
	
	cout << "Padawan com mais pontos: " << pmp << endl;;
	cout << "Pontos: " << mp << endl;
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << md << endl;
	
	return 0;
}