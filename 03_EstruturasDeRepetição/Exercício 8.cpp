//Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada,
//escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido"
//e o algoritmo encerrado. Considere que a senha correta é o valor 2002. 

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int s; //senha
	while(s != 2002)
	{
		cin >> s;
		if(s == 2002)
			cout << "Acesso Permitido" << endl;
		else
			cout << "Senha Inválida" << endl;
	}	
	return 0;
}