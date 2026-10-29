#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ds, g, f, delta, d, m, a; //variáveis das equações, dia, mês e ano
	double n;
	cin >> d >> m >> a;
	if(m <= 2)
	{
		g = a - 1;
		f = m + 13;
	}	
	else
	{
		g = a;
		f = m + 1;
	}
	n = int(365.25*g) + int(30.6*f) - 621049 + d;
	if(n < 36523)
		delta = 2;
	else if(36523 <= n && n < 73048)
		delta = 1;
	else
		delta = 0;
	ds = round(((n/7) - int(n/7))*7) + delta + 1;
	if(ds == 1)
		cout << "Domingo" << endl;
	else if(ds == 2)
		cout << "Segunda-feira" << endl;
	else if(ds == 3)
		cout << "Terça-feira" << endl;
	else if(ds == 4)
		cout << "Quarta-feira" << endl;
	else if(ds == 5)
		cout << "Quinta-feira" << endl;
	else if(ds == 6)
		cout << "Sexta-feira" << endl;
	else if(ds == 7)
		cout << "Sábado" << endl;
	else
	{
		cout << "Errado" << endl;
	}
	return 0;
}