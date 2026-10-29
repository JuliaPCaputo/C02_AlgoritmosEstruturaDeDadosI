//A distribuição gaussiana é uma das mais importantes, pois modela vários fenômenos físicos de interesse
//como o ruído de canal, a estimação de erros, etc.
//Ela possui dois parâmetros: - a média m, - o desvio padrão s e pode ser calculada pela expressão: f(x)=12ps2----ve-(x-m)22s2
//Faça um programa que leia os valores de x, m e s , e mostre o valor de f(x).
//Considere p=3.14159

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
        //Declaração de variáveis
    double equacao, x, m ,s, e; //f(x), média, desvio padrão
    double pi = 3.14159;
        //Entrada de dados
    cin >> x;
    cin >> m;
    cin >> s;
        //Cálculos
    e = exp(1);
    equacao = (1 / sqrt(2 * pi * pow(s, 2))) * pow(e, -(pow(x - m, 2) / (2 * pow (s, 2))));
        //Saída de dados
    cout << fixed << setprecision(4);
    cout << equacao << endl;
    return 0;
}