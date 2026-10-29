//Pedra, papel e tesoura é um jogo de mãos recreativo e simples para duas ou mais pessoas, que não requer equipamentos nem habilidade.
//Neste os jogadores devem simultaneamente esticar a mão, na qual cada um formou um símbolo (que significa pedra, papel ou tesoura). Então,
//os jogadores comparam os símbolos para decidir quem ganhou, da seguinte forma:
//Pedra ganha da tesoura (amassando-a ou quebrando-a).
//Tesoura ganha do papel (cortando-o).
//Papel ganha da pedra (embrulhando-a).
//Se ambos mostrarem o mesmo símbolo, então ocorreu um empate. Dadas as opções escolhidas por cada jogador, faça um programa que determine o
//vencedor de cada partida.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int T; //número de casos de teste
	string JA[100], JB[100]; //jogador A e B
	int i; //indice do vetor
	
	cin >> T;
	for(i = 0; i < T; i++)
	{
		cin >> JA[i];
		cin >> JB[i];
	}
	for(i = 0; i < T; i++)
	{
		if(JA[i] == "pedra" && JB[i] == "tesoura")
			cout << "Jogador A" << endl;
		else if(JA[i] == "tesoura" && JB[i] == "pedra")
			cout << "Jogador B" << endl;
		else if(JA[i] == "tesoura" && JB[i] == "papel")
			cout << "Jogador A" << endl;
		else if(JA[i] == "papel" && JB[i] == "tesoura")
			cout << "Jogador B" << endl;
		else if(JA[i] == "papel" && JB[i] == "pedra")
			cout << "Jogador A" << endl;
		else if(JA[i] == "pedra" && JB[i] == "papel")
			cout << "Jogador B" << endl;
		else if(JA[i] == JB[i])
			cout << "Empate" << endl;
	}
	return 0;
}