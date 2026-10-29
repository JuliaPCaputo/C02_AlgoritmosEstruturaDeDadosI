/*
Escreva um programa que permita fazer a conversão de temperaturas, de graus Centígrados para graus Fahrenheit,
sendo F = (9 * C + 160) / 5
Mostrar o resultado com uma casa decimal
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        //Declaração de variáveis
    double C, F; //Temperatura em graus Centígrados e Fahrenheit, respectivamente
        //Entrada de dados
    cin >> C;
        //Cálculos
    F = (9*C + 160) / 5;
        //Saída de dados
    cout << fixed << setprecision(1);
    cout << F << endl;
    return 0;
}