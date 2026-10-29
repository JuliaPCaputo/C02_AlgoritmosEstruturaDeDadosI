//La casa de papel é a série não americana de maior sucesso no Netflix, embora tenha gente que odiou. Depois de uma séria discussão se
//a série era boa ou não, resolveram fazer uma pesquisa de opinião: quem gostou dava um like, e quem não gostou dava um dislike no facebook.
//O seu trabalho é fazer um programa que veja se a série é boa ou não, na opinião da galera

#include <iostream>
using namespace std;
int main()
{
	int N; //número de votos
	int nl = 0; //número de likes
	int ndl = 0; //número de dislikes
	int i; //indice do vetor
	cin >> N;
	int op[N]; //opiniões
	for(i = 0; i < N; i++)
	{
		cin >> op[i];
		if(op[i] == 1)
			nl++;
		else
			ndl++;
	}
	if(nl > ndl)
		cout << "A maioria gostou" << endl;
	else if(nl < ndl)
		cout << "A maioria nao gostou" << endl;
	else
		cout << "Deu empate" << endl;
	return 0;
}