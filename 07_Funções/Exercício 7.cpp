//The World's Strongest Man é uma competição para ver quem é o homem mais forte do mundo. Dentre as provas que os competidores têm que
//passar incluem-se carregar pedras super pesadas, puxar caminhões ou ônibus, jogar objetos gigantes, etc. Cada prova tem uma pontuação,
//e o competidor que fizer mais pontos é o vencedor. Você foi contratado para desenvolver um sistema que receba os nomes e notas de cada
//competidor e aponte o vencedor (aquele que fizer mais pontos). Para isso, faça um programa que leia o nome e 4 notas de cada competidor, 
//armazene estes dados em um vetor de structs. Depois, desenvolva uma função que receba este vetor e a posição em que está o vencedor da
//competição. Você pode considerar que não haverá empates.A struct para armazenar os dados deve ser
//struct dados
//{
//    string nome;
//    int n1;
//    int n2;
//    int n3;
//    int n4; 
//};
//A função deve ter o seguinte cabeçalho: int strongest(dados atletas[], int nAtletas)

#include <iostream>
#include <cstring>
using namespace std;

struct dados
{
    string nome;
    int n1;
    int n2;
    int n3;
    int n4; 
};

int strongest(dados atletas[], int nAtletas)
{
	int soma = 0; //soma das notas
	int ma = 0; //maior soma
	int pma; //posição da maior soma
	
	for(int i = 0; i < nAtletas; i++)
	{
		soma = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
		if(soma > ma)
		{
			ma = soma;
			pma = i;
		}
		
		soma = 0;
	}
	return pma;
}

int main()
{
	dados atletas[100]; //nome e notas dos atletas, do tipo dados
	int N; //número de atletas
	int ma; //posição do atleta com maior soma
	
	do {
		cin >> N;
	} while(N < 0 || N > 100);
	
	for(int i = 0; i < N; i++)
	{
		cin.ignore();
		getline(cin, atletas[i].nome);
		do {
			cin >> atletas[i].n1;
		} while(atletas[i].n1 < 0 || atletas[i].n1 > 100);
		do {
			cin >> atletas[i].n2;
		} while(atletas[i].n2 < 0 || atletas[i].n2 > 100);
		do {
			cin >> atletas[i].n3;
		} while(atletas[i].n3 < 0 || atletas[i].n3 > 100);
		do {
			cin >> atletas[i].n4;
		} while(atletas[i].n4 < 0 || atletas[i].n4 > 100);
	}
	
	ma = strongest(atletas, N);
	
	cout << "Vencedor: " << atletas[ma].nome << endl;
	
	return 0;
}