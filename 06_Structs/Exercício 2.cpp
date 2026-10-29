//Faça um programa que leia o número de matrícula e as notas de duas provas de um aluno (as notas são reais), e armazene estas informações
//em uma struct adequada. Depois o programa deve calcular a média do aluno (uma média ponderada, onde a primeira prova tem peso 2 e a
//segunda, peso 3), e guardar este resultado na struct também. Finalmente, o programa deve mostrar os dados na tela.

#include <iostream>
#include <iomanip>
using namespace std;

struct notas
	{
		int mat; //matrícula
		double N1, N2; //notas 1 e 2
		double md; //média	
	};
	
int main()
{
	notas info; //informações do aluno, do tipo notas
	
	do{
	    cin >> info.mat;
	}while(info.mat < 0);
	
	do{
	    cin >> info.N1;
	}while(info.N1 < 0);
	
	do{
	    cin >> info.N2;
	}while(info.N2 < 0);

	info.md = ((2 * info.N1) + (3 * info.N2)) / 5;
	cout << fixed << setprecision(2);
	cout << "Matricula do aluno: " << info.mat << endl;
	cout << "Nota da primeira prova: " << info.N1 << endl;
	cout << "Nota da segunda prova: " << info.N2 << endl;
	cout << "Media: " << info.md << endl;
	return 0;
}