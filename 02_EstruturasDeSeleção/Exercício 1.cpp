//Leia 4 valores inteiros A, B, C e D. Então, se B for maior que C e D for maior que A e se a soma de C e D
//for maior que a soma de A e B e se C e D forem valores positivos e se A for par, escreva a mensagem “Valores aceitos”.
//Caso contrário, escreva a mensagem “Valores nao aceitos”.

#include <iostream>
using namespace std;
int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	if(B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0)
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores nao aceitos" << endl;
	return 0;
}