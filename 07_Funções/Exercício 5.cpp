//O professor Assustador pediu para que você desenvolvesse um programa que lesse as notas de todos os alunos de sua sala, e retornasse a
//média da turma. Para isso, faça um programa que leia as notas de cada aluno e as armazene em um vetor. Depois, desenvolva uma função que
//receba este vetor e retorne a média da turma. O cabeçalho desta função deve ser: float media(int notas[], int nAlunos)

#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos)
{
	float md; //média
	int soma = 0; //soma das notas
	
	for(int i = 0; i < nAlunos; i++) {
		soma += notas[i];
	}
	
	md = (soma * 1.0) / nAlunos;
	return md;
}

int main()
{
	int N; // número de alunos
	int notas[100]; //notas de, no máximo, 100 alunos
	
	do{
		cin >> N;
	}while(N < 0 || N > 100);	
	
	for(int i = 0; i < N; i++)
	{
		cin >> notas[i];
	}
	
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << media(notas, N) << endl;
	
	return 0;
}