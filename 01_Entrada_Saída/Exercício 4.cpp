//Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
//a) a área do triângulo retângulo que tem A por base e C por altura. 
//b) a área do círculo de raio C. (pi = 3.14159) 
//c) a área do trapézio que tem A e B por bases e C por altura. 
//d) a área do quadrado que tem lado B. 
//e) a área do retângulo que tem lados A e B.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
        //Declaração de variáveis
    double A, B, C, areaTriRet, areaCir, areaTrap, areaQuad, areaRet;
        //Entrada de dados
    cin >> A;
    cin >> B;
    cin >> C;
        //Cálculos
    areaTriRet = (A * C) / 2;
    areaCir = 3.14159 * pow(C, 2);
    areaTrap = ((A + B) * C) / 2;
    areaQuad = pow(B, 2);
    areaRet = A * B;
        //Saída de dados
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriRet << endl;
    cout << "CIRCULO: " << areaCir << endl;
    cout << "TRAPEZIO: " << areaTrap << endl;
    cout << "QUADRADO: " << areaQuad << endl;
    cout << "RETANGULO: " << areaRet << endl;
    return 0;
}