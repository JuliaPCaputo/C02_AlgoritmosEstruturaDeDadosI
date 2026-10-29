//Escreva um programa que leia a matrícula (inteiro), o nome (string), o tipo da prova('A' ou 'B') e as duas notas (inteiro) de um aluno,
//mostrando ao final sua matrícula seguida de sua média (média aritmática simples das notas)

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
	int MT, N1, N2; //matrícula, notas 1 e 2
	double md; //média
	string nm; //nome
	char TP[2]; //tipo de prova
	cout << "Matricula: ";
	cin >> MT;
	cout << "Nome: ";
	cin.ignore();
	getline(cin, nm);
	cout << "Tipo ('A' ou 'B'): ";
	cin >> TP;
	cout << "Notas: ";
	cin >> N1 >> N2;
	md = (N1 + N2) / 2.0;
	cout << fixed << setprecision(1);
	cout << "Matricula: " << MT << endl;
	cout << "Média: "<< md << endl;
	return 0;
}