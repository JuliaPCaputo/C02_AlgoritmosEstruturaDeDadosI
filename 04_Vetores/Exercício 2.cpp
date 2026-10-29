//Whindersson Nunes é um fenômeno no Youtube: cada vídeo dele tem milhões de visualizações, e o canal do jovem piauiense tem quase 30 milhões
//de inscritos. Ele ganha dinheiro pelo número de visualizações, e decidiu pedir pra você fazer um programa que mostrasse quantos vídeos
//têm 10 milhões de visualizações ou mais, e quantos têm menos de 10 milhões de visualizações. Então, você deve fazer um programa que leia
//o número de views de cada vídeo, armazene estes dados em um vetor, e forneça os dados listados acima.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;					//vídeos a serem analisados
	int i;					//índice do vetor
	int ma = 0, me = 0;		//número de vídeos com mais e menos de 10M visualizações
	cin >> N;
	int V[N];				//visualizações do vídeo
	for(i = 0; i < N; i++)
	{
		cin >> V[i];
		if(V[i] >= 10000000)
			ma++;
		else
			me++;
	}
	cout << ma << " vídeo(s) com mais de 10M views" << endl;
	cout << me << " vídeo(s) com menos de 10M views" << endl;
	return 0;
}