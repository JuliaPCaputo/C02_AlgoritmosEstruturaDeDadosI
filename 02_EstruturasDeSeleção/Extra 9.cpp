//Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente,
//uma linha em branco e em seguida, os valores na sequência como foram lidos.

#include <iostream>
using namespace std;
int main()
{
	int a, b, c; //valores
	cin >> a >> b >> c;
	if(a>b && a>c && b>c)
	{
		cout << c << endl;
		cout << b << endl;
		cout << a << endl;
	}
	else if(a>b && a>c && c>b)
	{
		cout << b << endl;
		cout << c << endl;
		cout << a << endl;
	}
	else if(b>a && b>c && a>c)
	{
		cout << c << endl;
		cout << a << endl;
		cout << b << endl;
	}
	else if(b>a && b>c && c>a)
	{
		cout << a << endl;
		cout << c << endl;
		cout << b << endl;
	}
	else if(c>a && c>b && a>b)
	{
		cout << b << endl;
		cout << a << endl;
		cout << c << endl;
	}
	else if(c>a && c>b && b>a)
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
	return 0;
}