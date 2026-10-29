//Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se
//mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cont, s = 0; //contador e soma da quantidade de valores positivos
	double x, md, p = 0; //valores inseridos, média, soma dos valores positivos
	for(cont = 1; cont <= 6; cont++)
	{
		cin >> x;
		if(x > 0)
		{
			s = s + 1;
			p = p + x;
		}	
	}
	md = p / s;
	cout << fixed << setprecision(1);
	cout << s << " valores positivos" << endl;
	cout << md << endl;
	return 0;
}