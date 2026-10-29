//Escreva um programa que leia o nome (string), o estado de origem (2 caracteres) e a idade (inteiro) de um aluno. Depois mostre os dados lidos.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string nm; //nome
	char est[3]; //estado, com 3 espaços de armazenamento
	int id; //idade
	cout << "Nome: ";
	getline(cin, nm);
	cout << "Estado: ";
	cin >> est;
	cout << "Idade: ";
	cin >> id;
	cout << "Nome: " << nm << endl;
	cout << "Estado: " << est << endl;
	cout << "Idade: " << id << endl;
	return 0;
}