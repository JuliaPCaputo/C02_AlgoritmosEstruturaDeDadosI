//Faça um programa que leia um número inteiro e verifique se o mesmo é positivo ou negativo. Esta verificação deve ser feita por meio de
//uma função sinalovo, que retorna 1 se o número for positivo, -1 se for negativo, 0 se o número for igual a zero. A função sinal() deve
//ter o seguinte cabeçalho: int sinal(int n)

#include <iostream>
using namespace std;

int sinal(int n) //função sinal
{
	string R; ///resultado
	if(n < 0)
		cout << "Negativo" << endl;
	else if(n > 0)
		cout << "Positivo" << endl;
	else
		cout << "Zero" << endl;
	return 0;
}

int main()
{
	int n; //número a ser avaliado
	
	cin >> n;
	
	sinal(n);
	return 0;
}