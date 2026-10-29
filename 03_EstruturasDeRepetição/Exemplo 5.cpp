//Exemplo 5

#include <iostream>
using namespace std;
int main()
{
	int N, cont; //quantidade de números, contador
	double x, s = 0; //número inserido e soma
	cin >> N;
	for(cont = 1; cont <= N; cont++)
	{
		cin >> x;
		s = s + x;
	}
	cout << s << endl;
	return 0;
}