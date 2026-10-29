#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese")
	int nd, op; //número de dias, operador (tipo de acomodação)
	double t, vd, ts; //total a pagar, valor da diária, taxa de serviço
	cout << "Informe o tipo de acomodação: (1)Executivo, (2)Luxo, (3)Presidencial" << endl;
	cin >> op;
	cout << "Informe o número de diárias: " << endl;
	cin >> nd;
	switch(op)
	{
		case 1: vd = 250;
			break;
		case 2: vd = 350;
			break;
		case 3: vd = 500;
			break;
		default: cout << "Opção inválida." << endl;
	}
	if(nd < 3)
		ts = 100;
	else if(nd >= 3 && nd <= 5)
		ts = 60;
	else
		ts = 0;
	t = vd * nd + ts;
	cout << fixed << setprecision(2);
	cout << "Total a ser pago: R$ " << t << endl;
	return 0;
}