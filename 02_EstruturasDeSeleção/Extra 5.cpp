#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double p, v, r; //preço atual, quantidade de vendas, reajuste
	cout << "Informe a quantidade vendida do produto: " << endl;
	cin >> v;
	cout << "Informe o preço atual do produto: " << endl;
	cin >> p;
	cout << fixed << setprecision(2);
	if(p > 0 && v == 0)
	{
		r = p - (0.1 * p);
		cout << "R$ " << r << " - Diminuição" << endl;	
	}
	else if(p > 0 && v > 0 && v < 500)
		cout << "R$ " << p << " - Sem reajuste" << endl;
	else if(p > 0 && v >= 500 && v < 1000)
	{
		r = p + (0.1 * p);
		cout << "R$ " << r << " - Aumento" << endl;
	}
	else if(p > 0 && v >= 1000)
	{
		r = p + (0.15 * p);
		cout << "R$ " << r << " - Aumento" << endl;
	}	
	else
		cout << "Erro de entrada." << endl;
	return 0;
}