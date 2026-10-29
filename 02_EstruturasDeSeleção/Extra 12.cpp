#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int l, c, r1, r2, maior; //largura, comprimento, raios 1 e 2, comparativo
    char saida = 'N';
    cin >> l >> c >> r1 >> r2;  
    if(r1 > r2)
        maior = r1+r1;
    else
        maior = r2+r2;
    if(maior <= l && maior <= c)
    {
        if(sqrt(pow((l - r2 - r1),2) + pow((c - r2 - r1),2)) >=  r1 + r2)
        {
            saida = 'S';
        }
    } 
    cout << saida << endl;
    return 0;
}