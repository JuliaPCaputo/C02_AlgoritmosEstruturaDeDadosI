//Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido,
//mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo
//(NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição
//zero é par, seu programa deverá imprimir apenas NULL.

#include <iostream>
using namespace std;
int main()
{
	int N, cont, x; //quantidade de valores, contador, número inserido
	cin >> N;
	for(cont = 1; cont <= N; cont++)
	{
		cin >> x;
		if((x % 2) == 0 && x > 0)
			cout << "EVEN POSITIVE" << endl;
		else if((x % 2) == 0 && x < 0)
			cout << "EVEN NEGATIVE" << endl;
		else if((x % 2) != 0 && x > 0)
			cout << "ODD POSITIVE" << endl;
		else if((x % 2) != 0 && x < 0)
			cout << "ODD NEGATIVE" << endl;
		else
		{
			cout << "NULL" << endl;
		}
	}
	return 0;
}