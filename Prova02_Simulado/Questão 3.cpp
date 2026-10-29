//Sabe-se do estuda da Física que, para o Movimento Uniformemente Variado, as equações (1) e (2) fornecem, respectivamente, a velocidade
//final (V) e a posição final (S) em função da velocidade inicial (V0 >= 0), posição inicial (S0 >= 0), aceleração (a) e o tempo (t >= 0).
//Escreva um programa em que, fornecidos os valores de velocidade inicial (V0), posição inicial (S0), aceleração (a) e tempo (t), calcule
//e mostre os avlores da velocidade final (V) e da posição final (S) correspondentes. (1) V = V0 + at e (2) S = S0 + V0t + 1/2 at^2.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//funções para o MUV
double Vfinal(double V0, double a, double t) //recebe os 3 parâmetros necessários
{
    double V; //velocidade final
    V = V0 + (a * t);
    return V;
}

double Sfinal(double S0, double V0, double t, double a) //recebe os 4 parâmetros
{
    double S; //posição final
    S = S0 + (V0 * t) + (a * pow(t, 2)) / 2;
    return S;
}

int main()
{
    double V0, S0, t, a; //parâmetros
    double V, S;
    
    do
    {
        cout << "V0 (>= 0): ";
        cin >> V0;
    }while(V0 < 0);
    
    do
    {
        cout << "S0 (>= 0): ";
        cin >> S0;
    } while(S0 < 0);
    
    do
    {
        cout << "T (>= 0): ";
        cin >> t;
    }while(t < 0);
    
    cout << "A: ";
    cin >> a;
    
    V = Vfinal(V0, a, t);
    S = Sfinal(S0, V0, t, a);
    
    cout << "V = " << V << endl;
    cout << "S = " << S << endl;
    return 0;
}