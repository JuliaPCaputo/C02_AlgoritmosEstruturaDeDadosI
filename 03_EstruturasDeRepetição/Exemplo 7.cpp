//Exemplo 7

#include <iostream>
using namespace std;
int main()
{
	int N, cont, i; //quantidade de pessoas, contador e idade
	float ma = 0, me = 0; //maior de idade e menor de idade
	cin >> N;
	for(cont = 1; cont <= N; cont++)
	{
		cin >> i;
		if(i < 18)
			me = me + 1;
		else
		{
			ma = ma + 1;
		}
	}
	cout << "Maiores: " << ma << endl;
	cout << "Menores: " << me << endl;
	return 0;
}