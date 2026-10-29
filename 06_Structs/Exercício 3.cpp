//Os Stormtroopers são a tropa de base do Império Galáctico, e são montados a partir dos clones que participaram da derrubada da República.
//Embora sejam clones, com o passar do tempo, começam a se diferenciar, por conta das diferentes missões que participam.
//O Império criou então um conjunto de índices para controlar a eficácia de cada um dos membros desta tropa de elite. Estes indicadores são:
//- Índice de Maldade (IM): mede o quão malvada é esta unidade
//- Força de Abate (FA): proporcional ao número de inimigos abatidos
//Temos uma missão importante para cumprir, então o comandante Darth Vader ordenou então que você fizesse um programa para cadastrar cada
//um dos Stormtroopers, e mostrar aquele mais apto para esta missão. O grau de aptidão (GA) pode ser calculado como a média aritmética dos
//dois índices acima. Sugiro que você faça este programa rápido, e sem erros, senão você sabe o que vai acontecer...

#include <iostream>
#include <iomanip>
using namespace std;

struct cadastro
	{
		int id; //identificação de cada soldado
		double IM; //índice de maldade
		double FA; //força de abate
	};
	
int main()
{
	int i; //indice
	int cont = 0; //contador do número de cadastros
	cadastro info[1000]; //informações do soldado, do tipo cadastro
	double GA[1000]; //grau de aptidão
	double ma = 0; //maior GA
	int idm; //identificação do soldado de maior GA
	while(true)
	{
	    do{cin >> info[i].id;
	        
	    }while(info[i].id < 0);
		if(info[i]. id == 0)
			break;
		do
		{
			cin >> info[i].IM;
		}while(info[i].IM < 0 || info[i].IM > 1);
		do
		{
			cin >> info[i].FA;
		}while(info[i].FA < 0 || info[i].FA > 1);
		i++;
		cont++;
	}
	for(i = 0; i < cont; i++)
	{
		GA[i] = (info[i].IM + info[i].FA) / 2;
		if(GA[i] > ma)
		{
			ma = GA[i];
			idm = info[i].id;
		}
	}
	cout << fixed << setprecision(2);
	cout << "Stormtrooper escolhido: " << idm << endl;
	cout << "GA = " << ma << endl;
	return 0;
}