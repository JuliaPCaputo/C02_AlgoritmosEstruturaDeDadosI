//Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
//Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

#include <iostream>
using namespace std;
int main()
{
	int x, y; //valores de x e y
	while(x != y)
	{
		cin >> x >> y;
		if(x < y)
			cout << "Crescente" << endl;
		else if(x > y)
			cout << "Decrescente" << endl;
	}
	return 0;
}