#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib> // Para a função system

using namespace std;

struct dados 
{
    long long telefone;  // Armazena o telefone (11 dígitos)
    long long cpf;       // Armazena o CPF (11 dígitos)
    string email;        // Armazena o e-mail
    string nome;         // Armazena o nome
    string endereco;     // Armazena o endereço
    string tipo_plano;   // Armazena o tipo de plano (ex: plano residencial)
    string subtipo;      // Armazena o subtipo de plano (ex: plano basico)
    string valor ;
};

// Função para validar a quantidade de dígitos de um telefone
int validarTelefone(long long telefone) 
{
    int contador_1 = 0; // Contador para os dígitos
    while (telefone > 0) // Enquanto o número ainda tiver dígitos
    {
        telefone = telefone / 10; // Remove o último dígito
        contador_1 = contador_1 + 1; // Incrementa o contador
    }
    return contador_1; // Retorna a quantidade de dígitos
}

// Função para validar a quantidade de dígitos de um CPF
int validarCPF(long long cpf) 
{
    int contador_2 = 0; // Contador para os dígitos
    while (cpf > 0) // Enquanto o número ainda tiver dígitos
    {
        cpf = cpf / 10; // Remove o último dígito
        contador_2 = contador_2 + 1; // Incrementa o contador
    }
    return contador_2; // Retorna a quantidade de dígitos
}

void ResidencialBasico();
void ResidencialPremium();
void ResidencialPremiumPlus();

void EmpresarialBasico();
void EmpresarialPremium();
void EmpresarialPremiumPlus();


void EspeciaisGamer();
void EspeciaisEsporte();

void coletarDados(dados& usuario) 
{
    int telefoneValido = 0, CPFvalido = 0; // Flags de validação locais

    cout << "\nAgora, vamos coletar seus dados." << endl;

    // Solicita o nome do usuário
    cout << "\nEntre com o seu nome: ";
    cin.ignore();
    getline(cin, usuario.nome);

    // Validação do telefone
    while (!telefoneValido) {
        cout << "\nAgora, entre com seu telefone (11 dígitos): ";
        cin >> usuario.telefone;
        if (validarTelefone(usuario.telefone) == 11) {
            cout << "Telefone registrado com sucesso!" << endl;
            telefoneValido = 1;
        } else {
            cout << "Telefone inválido. Certifique-se de digitar exatamente 11 dígitos." << endl;
        }
    }

    // Validação do CPF
    while (!CPFvalido) {
        cout << "\nAgora, entre com seu CPF (11 dígitos): ";
        cin >> usuario.cpf;
        if (validarCPF(usuario.cpf) == 11) {
            cout << "CPF registrado com sucesso!" << endl;
            CPFvalido = 1;
        } else {
            cout << "CPF inválido. Tente novamente." << endl;
        }
    }

    cin.ignore(); // Limpa o buffer após entrada numérica

    // Solicita o e-mail do usuário
    cout << "\nEntre com o seu email: ";
    getline(cin, usuario.email);
    cout << "Email registrado com sucesso!" << endl;

    // Solicita o endereço do usuário
    cout << "\nEntre com o seu endereço: ";
    getline(cin, usuario.endereco);
    cout << "Endereço registrado com sucesso!" << endl;
}


int main()
{
	dados usuario;
	bool rodando = true;
	bool rodandoPlanos = true;
	
	int telefoneValido = 0; // Flag para indicar se o telefone é válido
    int CPFvalido = 0;      // Flag para indicar se o CPF é válido
    int opcao;              // opcao para ver se o cliente tem interesse em algum dos planos
    char escolha_do_tipo;   // para escolher o tipo de plano
    char subtipo;
    
    usuario.cpf = 00000000000;
    usuario.telefone = 00000000000;
	usuario.tipo_plano = "Sem plano";
	usuario.subtipo = "Sem plano";
	usuario.valor = "Sem plano";
	
	setlocale(LC_ALL, "Portuguese");
		
	while(true)
	{
		//system("cls");
		
		int opcoes;
		cout << "Bem vindo(a) à ConnectInTel!" << endl;
		cout << "Escolha a opção desejada" << endl;
		cout << "1º <=> Meus dados" << endl;
		cout << "2º <=> Planos" << endl;
		cout << "3º <=> Extrato" << endl;
		cout << "4º <=> Meu plano atual" << endl;
		cout << "5º <=> Sair" << endl;
		cout << "=> ";
		
		cin >> opcoes;
		
		switch(opcoes)
		{
		case 1:
			system("cls");
			int n;
			while(true)
			{
				cout << "\n1º => Meus dados <= 1º\n" << endl;
				cout << "Nome: " << usuario.nome << endl;
				cout << "Telefone: " << usuario.telefone << endl;
				cout << "CPF: " << usuario.cpf << endl;
				cout << "Email: " << usuario.email << endl;
				cout << "Endereço: " << usuario.endereco << endl;
				cout << "Seu Plano: " << usuario.tipo_plano << endl;
				cout << "Subtipo: " << usuario.subtipo << endl;	
				cout << "\nDigite '1' para voltar ao menu" << endl;
				cout << "\nDigite '2' para atualizar os dados" << endl;
				cout << "=> ";
				cin >> n;
				if(n == 1)
				{
					system("cls");
					break;
				}
				else if(n == 2)
				{
					coletarDados(usuario);
				}
				else
				{
					system("cls");
					cout << "\nOpção inválida! Por favor, escolha '1' se quiser voltar ao menu\n" << endl;
				}
			}
			
			break;
		case 2:
			rodando = true;
			while(rodando)
			{
				system("cls");
				int opcoesPlano;
				cout << "\n2º => Planos <= 2º\n" << endl;
				cout << "Temos 3 categorias de planos" << endl;
				cout << "Escolha alguma opção" << endl;
				cout << "1º <=> Planos Residencias" << endl;
				cout << "2º <=> Planos Empresariais" << endl;
				cout << "3º <=> Planos Especiais" << endl;
				cout << "4º <=> Voltar para o menu" << endl;
				cout << "=> ";
				cin >> opcoesPlano;
				
				switch(opcoesPlano)
				{
				case 1:
					system("cls");
					cout << "\nPLANOS RESIDENCIAIS" << endl;
					
					ResidencialBasico();
					ResidencialPremium();
					ResidencialPremiumPlus();
					cout << "\nE o melhor: na assinatura de um plano RESIDENCIAL você ainda tem a chance de ganhar um mês gratuito do plano escolhido!" << endl;				
					while(true)
					{
						
						cout << "\nSelecione o plano que deseja contratar:" << endl;
						cout << "1) BÁSICO" << endl;
						cout << "2) PREMIUM" << endl;
						cout << "3) PREMIUM PLUS" << endl;
						cout << "4) Voltar para o Menu" << endl;
						cout << "=> ";
						cin >> subtipo;
						if(subtipo == '1')
						{
							usuario.tipo_plano = "RESIDENCIAL";
							usuario.subtipo = "BÁSICO";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << "!" << endl;
							coletarDados(usuario);
							usuario.valor = "R$ 74,99/mês";
							rodando = false;
							break;
					  	   	
						}
						else if(subtipo == '2')
						{
							usuario.tipo_plano = "RESIDENCIAL";
							usuario.subtipo = "PREMIUM";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << "!" << endl;
							coletarDados(usuario);
							usuario.valor = "R$ 109,99/mês";
							rodando = false;
							break;
							
						}
						else if(subtipo == '3')
						{
							usuario.tipo_plano = "RESIDENCIAL";
							usuario.subtipo = "PREMIUM PLUS";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << "!" << endl;
							coletarDados(usuario);
							usuario.valor = "R$ 149,99/mês";
							rodando = false;
							break;
							
						}
						else if(subtipo == '4')
						{
							break;	
						}
						else
						{
							cout << "Opção inválida! Por favor, escolha A, B, C ou D." << endl;
						}
					}
					
					break;
				case 2:
					system("cls");
					cout << "\nPLANOS EMPRESARIAIS" << endl;
					
					EmpresarialBasico();
					EmpresarialPremium();
					EmpresarialPremiumPlus();
					
					while(true)
					{
						
						cout << "\nSelecione o plano que deseja contratar:" << endl;
						cout << "1) BÁSICO" << endl;
						cout << "2) PREMIUM" << endl;
						cout << "3) PREMIUM PLUS" << endl;
						cout << "4) Voltar para o Menu" << endl;
						cout << "=> ";
						cin >> subtipo;
						if(subtipo == '1')
						{
							usuario.tipo_plano = "EMPRESARIAL";
							usuario.subtipo = "BÁSICO";
							usuario.valor = "R$ 224,99";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << " " << usuario.valor << "!" << endl;
							coletarDados(usuario);
							break;
						}
						else if(subtipo == '2')
						{
							usuario.tipo_plano = "EMPRESARIAL";
							usuario.subtipo = "PREMIUM";
							usuario.valor = "R& 324,99";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << " " << usuario.valor << "!" << endl;
							coletarDados(usuario);
							break;
						}
						else if(subtipo == '3')
						{
							usuario.tipo_plano = "EMPRESARIAL";
							usuario.subtipo = "PREMIUM PLUS";
							usuario.valor = "R& 424,99";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << " " << usuario.valor << "!" << endl;
							coletarDados(usuario);
							break;
						}
						else if(subtipo == '4')
						{
							break;	
						}
						else
						{
							cout << "Opção inválida! Por favor, escolha A, B, C ou D." << endl;
						}
					}
					break;
					
					break;
				case 3:
					
					system("cls");
					cout << "\nPLANOS ESPECIAIS" << endl;
	
					
					EspeciaisGamer();
					EspeciaisEsporte();
					while(true)
					{	
						
						cout << "\nSelecione o plano que deseja contratar:" << endl;
						cout << "1) GAMER" << endl;
						cout << "2) ESPORTE" << endl;
						cout << "3) Voltar para o Menu" << endl;
						cout << "=> ";
						cin >> subtipo;
						if(subtipo == '1')
						{
							usuario.tipo_plano = "ESPECIAL";
							usuario.subtipo = "GAMER";
							usuario.valor = "R$ 184,99";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << " " << usuario.valor << "!" << endl;
							coletarDados(usuario);
							break;
						}
						else if(subtipo == '2')
						{
							usuario.tipo_plano = "ESPECIAL";
							usuario.subtipo = "ESPORTE";
							usuario.valor = "R$ 184,99";
							cout << "Você escolheu o plano " << usuario.tipo_plano << " " << usuario.subtipo << " " << usuario.valor << "!" << endl;
							coletarDados(usuario);
							break;
						}
						else if(subtipo == '3')
						{
							break;	
						}
						else
						{
							cout << "Opção inválida! Por favor, escolha A, B ou C." << endl;
						}
						
					}
					break;
					
					break;
				case 4:
					system("cls");
					rodando = false;
					break;
					
				default:
					cout << "Digite 1,2,3 ou 4." << endl;
					break;
				}
				
				
				
			}
			break;
		case 3:
			system("cls");
			int m;
			while(true)
			{
				cout << "\n\n					ConnectInTel" << endl;									//mostra o nome da empresa
				cout << "\n3º => Extrato <= 3º\n" << endl;
				cout << "\nPlano escolhido: " << usuario.tipo_plano << " " << usuario.subtipo << endl;	//mostra o plano escolhido
				cout << "Valor da mensalidade: " << usuario.valor << endl;								//mostra o valor da mensalidade a pagar
		        cout << "Nome do cliente: " << usuario.nome << endl; 									//mostar nome do cliente
			    cout << "CPF: " << usuario.cpf << endl; 												//mostra o cpf do cliente
			    cout << "Telefone: " << usuario.telefone << endl; 										//mostra o telefone do cliente
			    cout << "E-mail: " << usuario.email << endl; 											//mostra o email do cliente
			    cout << "Endereço: " << usuario.endereco << endl; 										//mostra o endereco
				cout << "\n|| ||| | ||| || ||| | | " << endl;
				cout << "\nDigite '1' para voltar ao menu" << endl;
				cout << "=> ";
				cin >> m;
				if(m == 1)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					cout << "\nOpção inválida! Por favor, escolha '1' se quiser voltar ao menu\n" << endl;
				}
			}
			break;
		case 4:
			system("cls");
			
			if(usuario.tipo_plano == "RESIDENCIAL")
			{
			   if(usuario.subtipo == "BÁSICO")
			   {
				   ResidencialBasico();
			   }	
			   else if(usuario.subtipo == "PREMIUM")
			   {
			   	   ResidencialPremium();
			   }
			   else if(usuario.subtipo == "PREMIUM PLUS")
			   {
			   	   ResidencialPremiumPlus();
			   }
			}
			else if(usuario.tipo_plano == "EMPRESARIAL")
			{
				if(usuario.subtipo == "BÁSICO")
				{
					EmpresarialBasico();
				}	
				else if(usuario.subtipo == "PREMIUM")
				{
					EmpresarialPremium();
				}
				else if(usuario.subtipo == "PREMIUM PLUS")
				{
					EmpresarialPremiumPlus();	
				}
			}
			else if(usuario.tipo_plano == "ESPECIAL")
			{
				if(usuario.subtipo == "GAMER")
				{
					EspeciaisGamer();
				}	
				else if(usuario.subtipo == "ESPORTE")
				{
					EspeciaisEsporte();
				}
			}
			
			int o;
			while(true)
			{
				cout << "\n4º => Meu plano atual <= 4º\n" << endl;
				cout << "\nDigite '1' para voltar ao menu" << endl;
				cout << "\nDigite '2' para voltar cancelar o plano" << endl;
				cout << "=> ";
				cin >> o;
				if(o == 1)
				{
					system("cls");
					break;
				}
				else if(o == 2 && usuario.tipo_plano != "Sem plano")
				{
					system("cls");
					cout << "Seu plano foi cancelado!" << endl;
					usuario.tipo_plano = "Sem plano";
					usuario.subtipo = "Sem plano";
					usuario.valor = "Sem plano";
				}
				else if(o == 2 && usuario.tipo_plano == "Sem plano")
				{
					system("cls");
					cout << "Você não tem plano para cancelar!" << endl;
				}
				else
				{
					system("cls");
					cout << "\nOpção inválida! Por favor, escolha '1' se quiser voltar ao menu ou 2 se quiser cancelar o plano.\n" << endl;
				}
			}
			
			break;
		case 5:
			
			return 0;
			
			break;
		default:
			break;
		}
	}
	
	
	
	
}

void ResidencialBasico()
{
	cout << "\nBÁSICO" << endl;
	cout << "R$ 74,99/mês;" << endl;
	cout << "300 MB;" << endl; 
	cout << "Garantia de 3 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
   	cout << "Instalação gratuita;" << endl;
   	cout << "Conserto gratuito em casos acidentais;" << endl;
   	cout << "Sem fidelidade contratual." << endl;
}

void ResidencialPremium()
{
	cout << "\nPREMIUM" << endl;
	cout << "R$ 109,99/mês;" << endl;
	cout << "600 MB;" << endl; 
	cout << "Garantia de 6 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Roteador incluso;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Conserto gratuito em casos acidentais;" << endl;
	cout << "Sem fidelidade contratual." << endl;
}
	
void ResidencialPremiumPlus()
{
	cout << "\nPREMIUM PLUS" << endl;
	cout << "R$ 149,99/mês;" << endl;
	cout << "900 MB;" << endl; 
	cout << "Garantia de 6 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Roteador incluso;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Conserto gratuito em casos acidentais;" << endl;
	cout << "Sem fidelidade contratual." << endl;
}

void EmpresarialBasico()
{
	cout << "\nBÁSICO" << endl;
	cout << "R$ 224,99/mês;" << endl;
	cout << "900 MB;" << endl; 
	cout << "Garantia de 3 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Conserto gratuito em casos acidentais;" << endl;
	cout << "Antivírus AVAST incluso." << endl;
}
void EmpresarialPremium()
{
	cout << "\nPREMIUM" << endl;
	cout << "R$ 324,99/mês;" << endl;
	cout << "1.2 GB;" << endl; 
	cout << "Garantia de 6 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Conserto gratuito em casos acidentais;" << endl;
	cout << "Antivírus AVAST incluso." << endl;
}
void EmpresarialPremiumPlus()
{
	cout << "\nPREMIUM PLUS" << endl;
	cout << "R$ 424,99/mês;" << endl;
	cout << "1.7 GB;" << endl; 
	cout << "Garantia de 6 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Conserto gratuito em casos acidentais e garantia de 2 anos;" << endl;
	cout << "Antivírus AVAST incluso." << endl;
}

void EspeciaisGamer()
{
	cout << "\nGAMER" << endl;
	cout << "R$ 184,99/mês;" << endl;
	cout << "700 MB;" << endl; 
	cout << "Garantia de 6 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Roteador incluso;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Sem fidelidade contratual;" << endl;
	cout << "Antivírus AVAST incluso;" << endl;
	cout << "Assinatura mensal na plataforma EA inclusa." << endl;
}

void EspeciaisEsporte()
{
	cout << "\nESPORTE" << endl;
	cout << "R$ 184,99/mês;" << endl;
	cout << "700 MB;" << endl; 
	cout << "Garantia de 6 meses;" << endl;
	cout << "Fibra-óptica;" << endl;
	cout << "Roteador incluso;" << endl;
	cout << "Wi-Fi incluso;" << endl;
	cout << "Suporte técnico 24h;" << endl;
	cout << "Instalação gratuita;" << endl;
	cout << "Sem fidelidade contratual;" << endl;
	cout << "Antivírus AVAST incluso;" << endl;
	cout << "Assinatura mensal na plataforma GLOBOPLAY inclusa." << endl;
}