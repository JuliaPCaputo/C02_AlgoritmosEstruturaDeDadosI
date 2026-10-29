#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double pg, pe, lg, le, pfg, pfe; //preço gasolina, preço etanol, litros gasolina, litros etanol, preço final gasolina, preço final etanol
	cin >> pg >> pe;
	cin >> lg >> le;
	cout << fixed << setprecision(2);
	if(lg > (2 * le))
	{
		pg += (0.2 * pg);
		pe -= (0.1 * pe);
		cout << "R$ " << pg << endl;
		cout << "R$ " << pe << endl;
	}
	else if(lg == (2 * le))
	{
		pg += (0.1 * pg);
		pe -= (0.1 * pe);
		cout << "R$ " << pg << endl;
		cout << "R$ " << pe << endl;
	}
	else if(lg < (2 * le))
	{
		pg -= (0.1 * pg);
		pe += (0.2 * pe);
		cout << "R$ " << pg << endl;
		cout << "R$ " << pe << endl;
	}
	return 0;
}