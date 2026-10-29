#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int id, t; //idade e tempo de contribuição
	cin >> id;
	cin >> t;
	if(id >= 65)
		cout << "Qualificado" << endl;
	else if(t >= 35)
		cout << "Qualificado" << endl;
	else if(id >= 60 && t >= 30)
		cout << "Qualificado" << endl;
	else
	{
		cout << "Não qualificado" << endl;
	}
	return 0;
}