//Um Jedi era um indivíduo sensível à Força, geralmente membro da Ordem Jedi, que estudava, servia-a, e usava as energias místicas da Força
//e seu lado luminoso. Mestre Yoda espalhou os cavaleiros nas bases para poder defendê-las, e quer ter um controle de quem está aonde.
//Para isso, a sua missão é cadastrar o nome de cada cavaleiro e a base aonde este está alocado, para que ele possa traçar as suas
//estratégias de combate ao Império

#include <iostream>
#include <cstring>
using namespace std;

struct jedi
{
	string nome; //nome do Jedi
	int base; //base
};

int main()
{
	int N; //número de cavaleiros a serem cadastrados
	int i = 0; //indice
	string busca; //busca de cavaleiros
	int encontrado = 0; //para verificar se foi encontrado
	jedi info[1000]; //informações, do tipo jedi
	
	do
	{
		cin >> N;
	}while(N < 0 || N > 1000);
		
	for(i = 0; i < N; i++)
	{
		cin.ignore();
		getline(cin, info[i].nome);
		cin >> info[i].base;	
	}
	
	cin.ignore();
	getline(cin, busca);
	
	for(i = 0; i < N; i++)
	{
		if(busca == info[i].nome)
		{
			cout << "Este cavaleiro esta na base " << info[i].base << endl;
			encontrado++;
		}		
	}
	
	if(encontrado == 0)
		cout << "Este cavaleiro nao esta cadastrado" << endl;
	
	return 0;
}