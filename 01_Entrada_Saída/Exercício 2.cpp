//Faça um programa que leia o valor do raio de um círculo e retorne sua área. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
        //Declaração de variáveis
    double R, valor_da_area;
        //Entrada de dados
    cin >> R;
        //Cálculos
    valor_da_area = 3.14159 * pow(R, 2);
        //Saída de dados
    cout << fixed << setprecision(3);
    cout << "AREA = " << valor_da_area << endl;
    return 0;
}