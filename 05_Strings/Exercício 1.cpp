//Escreva um programa que leia o nome (string), o CPF (string) e o ano de nascimento (inteiro) de um aluno. Depois, mostre os dados lidos

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string nm, CPF; //nome e CPF
	int an; //ano de nascimento
	cout << "Nome: ";
	getline(cin, nm);
	cout << "CPF: ";
	cin >> CPF;
	cout << "Nascimento: ";
	cin >> an;
	cout << "Nome: " << nm << endl;
	cout << "CPF: " << CPF << endl;
	cout << "Nascimento: " << an << endl;
	return 0;
}