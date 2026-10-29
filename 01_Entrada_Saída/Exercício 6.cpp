//O atual sistema financeiro utiliza o regime de juros compostos, pois ele oferece uma maior rentabilidade
//se comparado com o regime de juros simples, em que o valor dos rendimentos torna-se fixo. O juro composto
//incide mês a mês de acordo com o somatório acumulativo do capital com o rendimento mensal, isto é, prática
//do juro sobre juro. As modalidades de investimentos e financiamentos são calculadas de acordo com esse modelo
//de investimento, pois ele oferece um maior rendimento, originando mais lucro.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
        //Declaração de variáveis
    double M, C, i, L; //Montante, Capital, taxa de juros, Lucro
    int t; //tempo
        //Entrada de dados
    cin >> C;
    cin >> i;
    cin >> t;
        //Cálculos
    M = C * pow(1 + i/100, t);
    L = M - C;
        //Saída de dados
    cout << fixed << setprecision(2);
    cout << "LUCRO = " << L << endl;
    return 0;
}