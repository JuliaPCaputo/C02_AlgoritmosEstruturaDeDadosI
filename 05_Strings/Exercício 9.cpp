//Faça um programa que leia três palavras e as mostre em ordem alfabética

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i, j; //indices
	string pa[3]; //palavras
	string aux; //variável auxiliar
	for(i = 0; i < 3; i++)
		getline(cin, pa[i]);
	for(j = 2; j > 0; j--)
	{
		for(i = 0; i < j; i++)
		{
			if(pa[i] > pa[i + 1])
			{
				aux = pa[i];
				pa[i] = pa[i + 1];
				pa[i + 1] = aux;	
			}
		}
	}
	for(i = 0; i < 3; i++)
		cout << pa[i] << " ";
	return 0;
}