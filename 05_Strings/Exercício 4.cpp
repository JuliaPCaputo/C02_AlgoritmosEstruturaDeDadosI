//Faça um programa que leia o nome de uma cidade e retorne seu DDD, segundo a tabela

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string cid; //cidade
	cout << "Cidade: ";
	getline(cin, cid);
	if(cid == "Brasilia")
		cout << "DDD: 61" << endl;
	else if(cid == "Salvador")
		cout << "DDD: 71" << endl;
	else if(cid == "Sao Paulo")
		cout << "DDD: 11" << endl;
	else if(cid == "Rio de Janeiro")
		cout << "DDD: 21" << endl;
	else if(cid == "Juiz de Fora")
		cout << "DDD: 32" << endl;
	else if(cid == "Campinas")
		cout << "DDD: 19" << endl;
	else if(cid == "Vitoria")
		cout << "DDD: 27" << endl;
	else if(cid == "Belo Horizonte")
		cout << "DDD: 31" << endl;
	else if(cid == "Santa Rita do Sapucai")
		cout << "DDD: 35" << endl;
	else
	{
		cout << "DDD nao cadastrado" << endl;
	}
	return 0;
}