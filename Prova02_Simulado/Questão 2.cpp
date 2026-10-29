//A empresa KD Eventos abriu um edital patra cadastrar participantes do 22º Festival Cultural de Ipocaí. Cada participangte deverá fornecer
//seu nome (string), sua idade (inteiro >= 10 e  <= 100) e sua opção (char) de participação: 'P' para poesia, 'M' para música ou 'A' para
//artes plásticas. Escreva um programa que leia e armazene, em um único vetor de registros, os dados de cada participante e mostre, ao final,
//o total de inscritos e o percentual de inscritos em cada uma das opções de participação. Após o cadastro de cada um dos participantes,
//solicitar oa usuário se deseja cadastrar novo participante ou finalizar os cadastros. Deverá ser permitido a inscrição de, no máximo,
//200 paticipantes. Fazer todas as validações necessárias

#include <iostream>
using namespace std;

struct cadastro
{
    string nome; //nome do participante
    int id; //idade
    char op; //opção
};

int main()
{
    cadastro info; //informações, do tipo cadastro
    int nc; //novo cadastro
    int cont = 0; //contador
    int P=0, M=0, A=0; //número de inscritos em cada modalidade
    
    do
    {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, info.nome);
        do
        {
            cout << "Idade (10 a 100): ";
            cin >> info.id;
        }while(info.id < 10 || info.id > 100);
        do
        {
            cout << "Participacao (P, M ou A): ";
            cin >> info.op;
            switch(info.op)
            {
                case 'P': P++;
                    break;
                case 'M': M++;
                    break;
                case 'A': A++;
            }
        }while(info.op != 'P' && info.op != 'M' && info.op != 'A');
        cont++;
        cout << "Tecle 1 p/ novo cadastro ou diferente p/ terminar: ";
        cin >> nc;
    }while(nc == 1 && cont <= 200);
    
    cout << "\nTotal de inscritos: " << cont << endl;
    cout << "Poesia: " << (P * 100)/cont << endl;
    cout << "Musica: " << (M * 100)/cont << endl;
    cout << "Artes: " << (A * 100)/cont << endl;
    
    return 0;
}