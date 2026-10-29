//Exemplo 1, usando IF e ELSE
//Escreva um programa em que fornecidas as duas notas (PV1 e PV2) do aluno, o mesmo calcule e mostre sua média
//(média aritmética simples) e sua condição: “Aprovado” ou “Reprovado”.
//Obs.: O aluno será aprovado se a média = 70; caso contrário estará reprovado.

#include <iostream>
using namespace std;
int main()
{
	double PV1, PV2, md;
	cin >> PV1 >> PV2;
	md = (PV1 + PV2) / 2;
	if(md >= 70)
		cout << "Media = " << md << " - Aprovado" << endl;
	else
		cout << "Media = " << md << " - Reprovado" << endl;
	return 0;
}