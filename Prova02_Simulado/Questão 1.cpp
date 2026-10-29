//Escreva um programa que leia N (1 <= N <= 10): a quantidade de valores inteiros não negativos a serem armazenados. Depois, leia os N
//valores inteiros não negativos (valores >= 0), armazenando-os em um vetor A. Depois, crie um vetor B, contendo o valor do fatorial de
//cada elemento armazenado no vetor A. Depois, mostre os elementos do vetor B. Fazer todas as validações necessárias.

#include <iostream>
using namespace std;
int main()
{
	int N; //números a serem armazenados
	int A[10]; //vetor A de 10 posições que armazena os valores de N
	int B[10]; //vetor B de 10 posições que armazena os fatoriais dos elementos de A
	int i, j; //índices
	int fat = 1; //fatorial, que tem o valor mínimo de 1
	
	do {
		cin >> N;
	} while(N < 1 || N > 10);
	
	for(i = 0; i < N; i++)
	{
		do {
			cin >> A[i];
		} while(A[i] < 0);
	}
	
	for(i = 0; i < N; i++)
	{
		fat = 1;
		for(j = 2; j <= A[i]; j++)
		{
			fat = fat * j;
		}
		B[i] = fat;
	}
	
	for(i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}	
	return 0;
}