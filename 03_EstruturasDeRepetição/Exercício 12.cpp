//A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS.
//Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)"
//e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova
//partida, caso contrário deve ser encerrado imprimindo:
//- Quantos GRENAIS fizeram parte da estatística.
//- O número de vitórias do Inter.
//- O número de vitórias do Grêmio.
//- O número de Empates.
//- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int GI, GG, p, sg = 0, VI = 0, VG = 0, E = 0; //gols do Inter, gols do Grêmio, pergunta, soma de grenais, vitórias ido inter e do grêmio, empates
	do
	{
		cout << "Informe o número de gols marcados pelo INTER no grenal: " << endl;
		cin >> GI;
		cout << "Informe o número de gols marcados pelo GRÊMIO no grenal: " << endl;
		cin >> GG;
		if(GI > GG)
			VI++;
		else if(GG > GI)
			VG++;
		else
			E++;
		sg++;
		cout << "Novo grenal (1 - Sim; 2 - Não)" << endl;
		cin >> p;
	}while(p == 1);
	cout << sg << " grenais fizeram parte da estatística" << endl;
	cout << "Número de vitórias do Inter: " << VI << endl;
	cout << "Número de vitórias do Grêmio: " << VG << endl;
	cout << "Número de empates: " << E << endl;
	if(VI > VG)
		cout << "INTER venceu mais grenais." << endl;
	else if(VG > VI)
		cout << "GRÊMIO venceu mais grenais." << endl;
	else
		cout << "Não houve vencedor." << endl;
return 0;
}