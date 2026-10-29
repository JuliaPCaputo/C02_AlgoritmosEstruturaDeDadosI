//Agora, o professor Assustador quer saber quantos alunos têm nota acima da média da turma e quantos têm nota abaixo da média da turma.
//Assim, incremente o seu programa, desenvolvendo mais duas funções, uma para verificar quantos alunos têm nota abaixo da média e outra
//para verificar quantos alunos têm nota acima da média. Os cabeçalhos destas funções devem ser:
//int nAbaixo(int notas[], int nAlunos, float media) e int nAcima(int notas[], int nAlunos, float media)

#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos)
{
	float md; //média
	int soma = 0; //soma das notas
	
	for(int i = 0; i < nAlunos; i++) {
		soma += notas[i];
	}
	
	md = (soma * 1.0) / nAlunos;
	return md;
}

int nAbaixo(int notas[], int nAlunos, float media)
{
	int abaixo = 0; //número de alunos com nota abaixo da média
	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] < media)
		{
			abaixo++;
		}
	}
	return abaixo;
}

int nAcima(int notas[], int nAlunos, float media)
{
	int acima = 0; //número de alunos com nota acima da média
	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] > media)
		{
			acima++;
		}
	}
	return acima;
}

int main()
{
	int N; // número de alunos
	int notas[100]; //notas de, no máximo, 100 alunos
	double md; //média
		
	do{
		cin >> N;
	}while(N < 0 || N > 100);	
	
	for(int i = 0; i < N; i++)
	{
		cin >> notas[i];
	}
	
	md = media(notas, N);
	
	cout << fixed << setprecision(2);
	cout << "Media da turma: " << md << endl;
	cout << "Alunos com nota abaixo da media: " << nAbaixo(notas, N, md) << endl;
	cout << "Alunos com nota acima da media: " << nAcima(notas, N, md) << endl;
	
	return 0;
}