//A Profa. Helena do terceiro ano está muito atarefada porque o Kokimoto e o Paulo se meteram em encrencas de novo. Para ajudá-la, você 
//ecidiu fazer um programa para ela monitorar o progresso (ou não) de seus alunos. Faça então um programa que leia as notas deles e
//mostre a média da turma e o número de alunos com nota abaixo da média e o número de alunos com nota igual ou acima da média.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N; //número de alunos
	double soma = 0; //soma das notas
	double md; //média dos alunos
	int ma = 0, me = 0; //contagem de alunos com nota maior e menor que a média
	int i; //índice do vetor
	cin >> N;
	double nota[N]; //nota dos alunos
	for(i = 0; i < N; i++)
	{
		cin >> nota[i];
		soma += nota[i];
	}
	md = soma / N;
	for(i = 0; i < N; i++)
	{
		if(nota[i] < md)
			me++;
		else
			ma++;	
	}
	cout << fixed << setprecision(2);
	cout << "Média da turma: " << md << endl;
	cout << fixed << setprecision(0);
	cout << "Alunos com nota acima da média: " << ma << endl;
	cout << "Alunos com nota abaixo da média: " << me << endl;
	return 0;
}