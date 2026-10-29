//O professor de matemática pergunta para o Joãozinho: O que devo fazer para repartir 11 batatas por 7 pessoas?Ele respondeu: Purê de batata.
//Elabore um programa que dados dois vetores X e Y, inteiros de N posições cada, efetue as respectivas operações indicadas por um outro
//vetor Op de N posições de caracteres também fornecido pelo usuário, contendo as quatro operações aritméticas em qualquer combinação,
//armazenando os resultados num quarto vetor Z.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N;              //número de casos
	cin >> N;
	int X[N];           //vetor X
	int Y[N];           //vetor Y
	char op[N];         //vetor op
	int i;              //indice
	double C;           //cálculo
	for(i = 0; i < 3; i++)
	{
	    for(int j = 0; j < N; j++)
		{
	        if(i == 0)
			{
	            cin >> X[j];
	        }
	        if(i == 1)
			{
	            cin >> Y[j];
	        }
	        if(i == 2)
			{
	            cin >> op[j];
	        }
	    }
	}
	for(i = 0; i < N; i++)
	{
		if(op[i] == '+')
		{
			C = X[i] + Y[i];
			cout << X[i] << " + " << Y[i] << " = " << C << endl;
		}	
		else if(op[i] == '-')
		{
			C = X[i] - Y[i];
			cout << X[i] << " - " << Y[i] << " = " << C << endl;
		}
		else if(op[i] == '*')
		{
			C = X[i] * Y[i];
			cout << X[i] << " * " << Y[i] << " = " << C << endl;
		}
		else if(op[i] == '/')
		{
			C = (X[i] * 1.0) / (Y[i] * 1.0);
			cout << fixed << setprecision(2);
			cout << X[i] << " / " << Y[i] << " = " << C << endl;
		}
	}
	
	return 0;
}