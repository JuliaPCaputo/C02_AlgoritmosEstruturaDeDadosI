//Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
//o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o
//salário do funcionário, com duas casas decimais.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        //Declaração de variáveis
    int  N, H; //Número do funcionário e horas trabalhadas
    double V, S; //Valor que recebe por hora e salário
        //Entrada de dados
    cin >> N;
    cin >> H;
    cin >> V;
        //Cálculos
    S = H * V;
        //Saída de dados
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << N << endl;
    cout << "SALARY = U$ " << S << endl;
    return 0;
}