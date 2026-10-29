//Joãozinho estava na escola e fala para o amigo: -Aê,descobri como colar na prova oral de tabuada: você só precisa escrever a tabuada
//na gola da sua camisa e eu leio. No dia da prova a professora fala: -Joãozinho fale a tabuada do cinco. -Uma vez o cinco,cinco; duas
//vezes o cinco, dez; três vezes o cinco,quinze; 100 por cento algodão. Faça um programa que leia um inteiro N e mostre a sua tabuada.

#include <iostream>
using namespace std;
int main()
{
	int N; //número
	int i; //indice
	int C; //cálculo
	cin >> N;;
	for(i = 0; i < 11; i++)
	{
		C = N * i;
		cout << N << " x " << i << " = " << C << endl;
	}
	return 0;
}