#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ta, nd; //tipo de automóvel, número de dias
	double vf, c; //valor final, custo diário
	cout << "Tipo do automóvel: " << endl;
	cin >> ta;
	cout << "Número de dias de locação: " << endl;
	cin >> nd;
	cout << fixed << setprecision(2);
	switch(ta)
	{
		case 1: c = 50 * nd;
			break;
		case 2: c = 100 * nd;
			break;
		case 3: c = 150 * nd;
			break;
	}
	if(nd < 7)
		cout << "Valor a ser pago pela locação: R$ " << c << endl;
	else if(nd >= 7 && nd < 15)
	{
		vf = c - (0.05 * c);
		cout << "Valor a ser pago pela locação: R$ " << vf << endl;
	}
	else if(nd >= 15)
	{
		vf = c - (0.1 * c);
		cout << "Valor a ser pago pela locação: R$ " << vf << endl;
	}
	return 0;
}