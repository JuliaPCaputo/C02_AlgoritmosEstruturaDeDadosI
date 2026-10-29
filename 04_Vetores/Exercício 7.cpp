//O organizador de uma corrida armazenou os tempos de cada competidor, e deseja agora saber a classificação de cada um. Elabore um programa
//que leia os tempos de cada corredor e os armazene em um vetor de números reais. Depois o programa deve mostrar a classificação da corrida
//(a posição de cada elemento no vetor identifica o corredor).

#include <iostream>
using namespace std;
int main()
{
	double T[100];      //tempos dos corredores
	int index[100];      //indices dos corredores
	int count = 0;      //indice
	cin >> T[count];
	index[count] = count;
	while (T[count] != -1)
	{
	    count++;
	    cin >> T[count];
	    index[count] = count;
	}
	for (int i = 0; i < count - 1; i++)
	{
        int minIndex = i;  // Assume que o menor valor está na posição i
        for (int j = i + 1; j < count; j++)
		{
            if (T[j] < T[minIndex])
			{
                minIndex = j;  // Encontra o menor valor no restante do array
            }
        }
        // Troca os tempos
        double tempTempo = T[i];
        T[i] = T[minIndex];
        T[minIndex] = tempTempo;

        // Troca os índices
        int tempIndice = index[i];
        index[i] = index[minIndex];
        index[minIndex] = tempIndice;
    }
    cout << "Classificacao:" << endl;
    for (int i = 0; i < count; i++)
	{
        cout << index[i] << endl;
	}
	return 0;
}