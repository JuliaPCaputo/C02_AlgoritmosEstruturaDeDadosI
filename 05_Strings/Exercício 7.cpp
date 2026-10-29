//Neste problema, seu trabalho é ler três palavras que definem um animal de acordo com a figura abaixo. Depois, mostre o nome do animal
//definido por estas três palavras

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string A, B, C; //características A, B e C
	string AN; //animal
	cin >> A >> B >> C;
	if(A == "vertebrado" && B == "ave" && C == "carnivoro")
		cout << "aguia" << endl;
	else if(A == "vertebrado" && B == "ave" && C == "onivoro")
		cout << "pomba" << endl;
	else if(A == "vertebrado" && B == "mamifero" && C == "onivoro")
		cout << "homem" << endl;
	else if(A == "vertebrado" && B == "mamifero" && C == "herbivoro")
		cout << "vaca" << endl;
	else if(A == "invertebrado" && B == "inseto" && C == "hematofago")
		cout << "pulga" << endl;
	else if(A == "invertebrado" && B == "inseto" && C == "herbivoro")
		cout << "lagarta" << endl;
	else if(A == "invertebrado" && B == "analideo" && C == "hematofago")
		cout << "sanguessuga" << endl;
	else if(A == "invertebrado" && B == "analideo" && C == "onivoro")
		cout << "minhoca" << endl;
	return 0;
}