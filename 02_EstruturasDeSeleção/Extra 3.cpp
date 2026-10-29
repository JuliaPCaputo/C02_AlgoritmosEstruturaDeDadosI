#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double t, x; //variável, função
	cin >> t;
	if(t >= -1 && t <= 1)
	{
		x = 1 - fabs(t);
		cout << fixed << setprecision(2);
		cout << "x(t) = " << x << endl;
	}
	else
	{
		cout << "x(t) = 0" << endl;
	}
	return 0;
}