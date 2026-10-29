/*
Escreva um código em que fornecidos um valor monetário em reais (R$) o mesmo converta e mostre o seu equivalente em
dólar (US$) e em euro (E).
Considere: 1 dólar = 5,66 reais ; 1 euro = 6,12 reais
Mostrar os resultados com apenas duas casas decimais.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double R; //valor em R$
    double D; //valor em U$
    double E; //valor em E
        //entrada de dados
    cin >> R;
        //cálculos
    D = R/5.66;
    E = R/6.12;
        //saída de dados
    cout << fixed << setprecision(2);
    cout << "U$ " << D << endl;
    cout << "E " << E << endl;
}