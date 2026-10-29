//O Facebook serve pra gente encontrar velhos amigos, parentes que nem conhecemos, saber por onde andam as pessoas, e muitas outras coisas.
//Há pessoas que têm muitos amigos na rede social, e outras que preferem ter contato apenas com os mais chegados. Para entender um pouco
//mais esta dinâmica, o Mark Zucherberg pediu pra você armazenar o número de amigos dos usuários do facebook em um vetor, e mostrar o maior
//e o menor número armazenado neste.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int U;			//número de usuários do Facebook
	int i;			//índice do vetor
	int ma, me;		//maior e menor valor
	cin >> U;
	int C[U];		//número de contatos de uma pessoa, armazenando de acordo com o número fornecido de usuários
	for(i = 0; i < U; i++)
	{
		cin >> C[i];
	}
	ma = C[0];
	me = C[0];
	for(i = 1; i < U; i++)
	{
		if(C[i] > ma)
			ma = C[i];
		else if(C[i] < me)
			me = C[i];
	}
	cout << "Menor numero de contatos: " << me << endl;
	cout << "Maior numero de contatos: " << ma << endl;
	return 0;
}