/*
Escreva um programa que, fornecido um valor em milhas/hora, o mesmo mostre o equivalente em km/h.
A conversão de milhas/hora mph para km/h pode ser feita pela seguinte expressão: kmh = mph * 1,609344
Mostrar o resultado com seis casas decimais.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        //Declaração de variáveis
    double mph, kmh; //Velocidade em milhas e em quilômetros, respectivamente
        //Entrada de dados
    cin >> mph;
        //Cálculos
    kmh = mph * 1.609344;
        //Saída de dados
    cout << fixed << setprecision(6);
    cout << kmh << endl;
    return 0;
}