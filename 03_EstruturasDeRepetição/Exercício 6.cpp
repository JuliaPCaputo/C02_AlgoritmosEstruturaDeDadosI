//Sendo H=1+1/2+1/3+...+1/N, construa um programa que calcule o valor de H para um dado valor de N

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N, cont; //número inserido, contador
	double H = 0, x; //valor final da conta, valor de cada parcela
	cin >> N;
	for(cont = 1; cont <= N; cont++)
	{
		x = 1.0 / cont;
		H = H + x;
	}
	cout << fixed << setprecision(4);
	cout << H << endl;
	return 0;
}