//Zezinho ainda é muito novo para fazer contas, mas já é muito esperto para mexer em apps de celular.
//Precisamos então que você desenvolva um programa que leia quanto dinheiro ele está levando, o preço total da compra,
//e calcule o troco que o vendedor deve dar ao Zezinho.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        //Declaração de variáveis
    double D, P, T; //Dinheiro que está levando, preço da compra e troco
        //Entrada de dados
    cin >> D;
    cin >> P;
        //Cálculos
    T = D - P;
        //Saída de dados
    cout << fixed << setprecision(2);
    cout << "TROCO = " << T << endl;
    return 0;
}