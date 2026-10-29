#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double r, v1, v2, v3; //renda, valor 1, 2 e 3
	cout << "Informe a renda: R$ ";
	cin >> r;
	cout << fixed << setprecision(2);
	if(r>0 && r<=2000)
		cout << "Isento" << endl;
	else if(r>2000 && r<=3000)
	{
		v1 = (r - 2000) * 0.08;
		cout << "Valor devido: R$ " << v1 << endl;
	}
	else if(r>3000 && r<=4500)
	{
		v1 = 1000 * 0.08;
		v2 = (r - 3000) * 0.18 + v1;
		cout << "Valor devido: R$ " << v2 << endl;
	}
	else
	{
		v1 = 1000 * 0.08;
		v2 = 1500 * 0.18;
		v3 = (r - 4500) * 0.28 + v1 + v2;
		cout << "Valor devido: R$ " << v3 << endl;
	}
	return 0;
}