//Faça um programa que leia vários números inteiros e os armazene em um vetor. Depois o programa deve ler um único número X e verificar
//se este está ou não no vetor

#include <iostream>
using namespace std;
int main()
{
	int N[101];          //números inseridos
	int X;              //número a ser procurado
	int index = -1;     //índice procurado
	int i = 0;          //indice do vetor
	cin >> N[i];
	while(N[i] != 0)
	{
	    i++;
	    cin >> N[i];
	}
	cin >> X;
	for (int j = 0; j < i; j++)
	{
        if (N[j] == X)
		{
            index = j;
            break;
        }
    }
    
    if (index != -1)
	{
        cout << "Elemento " << X << " encontrado na posicao " << index << endl;
    }
	else
	{
        cout << "Elemento " << X << " nao foi encontrado" << endl;
    }
    
	return 0;
}