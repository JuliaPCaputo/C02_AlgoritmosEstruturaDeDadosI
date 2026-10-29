//Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo
//o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente
//mensagem alguma além daquilo que está sendo especificado.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        //Declaração de variáveis
    int A, B, X;
        //Entrada de dados
    cin >> A >> B;
        //Cálculos
    X = A + B;
        //Saída de dados
    cout << "X = " << X << endl;
    return 0;
}