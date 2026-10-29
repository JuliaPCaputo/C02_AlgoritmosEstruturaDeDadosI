//Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só
//deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.
//No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele
//deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução
//de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int p; //pergunta
	double n1, n2, md; //nota 1 e 2, média
	do
	{
		do
		{
			cin >> n1;
			if(n1 < 0 || n1 > 10)
				cout << "Nota inválida" << endl;
		}while(n1 < 0 || n1 > 10);
		do
		{
			cin >> n2;
			if(n2 < 0 || n2 > 10)
				cout << "Nota inválida" << endl;
		}while(n2 < 0 || n2 > 10);
		cout << fixed << setprecision(2);
		md = (n1 + n2) / 2;
		cout << "Média = " << md << endl;
		cout << "Novo cálculo: (1)Sim; (2)Não" << endl;
		cin >> p;
		if(p != 1 && p != 2)
		{
			cout << "Inválido" << endl;
			cout << "Novo cálculo: (1)Sim; (2)Não" << endl;
			cin >> p;
		}
	}while(p == 1);
	return 0;
}