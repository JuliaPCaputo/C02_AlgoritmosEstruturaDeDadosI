//Exemplo 1, usando apenas IF
#include <iostream>
using namespace std;
int main()
{
	double n1, n2, md;
	cin >> n1 >> n2;
	md = (n1 + n2) / 2;
	cout << md << endl;
	if(md >= 70)
		cout << "Aprovado" << endl;
	if(md < 70)
		cout << "Reprovado" << endl;
	return 0;
}