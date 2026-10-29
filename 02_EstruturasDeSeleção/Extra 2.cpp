#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double x, y, f; //variáveis, função
	cin >> x >> y;
	if(x < 0 || y < 0)
		cout << "Erro; raiz de número negativo" << endl;
	else if(pow(y,3) - sqrt(x) == 0)
		cout << "Erro; divisão por zero" << endl;
	else
	{
		f = (pow(x,3) - sqrt(y)) / (pow(y,3) - sqrt(x));
		cout << fixed << setprecision(4);
		cout << "f(x,y) = " << f << endl;
	}
	return 0;
}