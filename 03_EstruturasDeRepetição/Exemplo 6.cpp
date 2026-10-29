//Exemplo 6

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N, cont; //quantidade de valores, contador
	double x, s = 0, m; //números inseridos, soma, média
	cin >> N;
	for(cont = 1; cont <= N; cont++)
	{
		cin >> x;
		s = s + x;
	}
	m = s / N;
	cout << fixed << setprecision(2);
	cout << m << endl;
	return 0;
}