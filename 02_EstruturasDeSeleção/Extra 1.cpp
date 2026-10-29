#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, y, f; //valores de x e y e valor final da função
	cin >> x >> y;
	if(x > y)
	{
		f = pow(x,2) - pow(y,2) + (2 * x * y);
		cout << fixed << setprecision(2);
		cout << "f(x,y) = " << f << endl;
	}
	else if(x == y)
	{
		f = (2 * x * y) + x + y;
		cout << fixed << setprecision(2);
		cout << "f(x,y) = " << f << endl;
	}
	else
	{
		f = pow(y,2) + pow(x,2) + (2 * x * y);
		cout << fixed << setprecision(2);
		cout << "f(x,y) = " << f << endl;
	}
	return 0;
}