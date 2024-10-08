#include <stdlib.h>
#include <stdlib.h>
#include <string.h>



struct fun{
   
   int codigo;
   char cargo[50];
   char nome [50];
   char cpf[50];
   char nascimento [50];
   char telefone[50];
   char endereco [50];
   int cep;
   char local [50];
   int numero_casa;
   char bairro[50];
   char cidade [50];
   char estado [50];
   int senha;
   int excluido;		
};


struct cc{
   
   float saldo;
   char tipo [50]; 
   int agencia;	
   int numero_conta;
   float limite;
   char vencimento [50];
   char nome[50];	
   char cpf[50];
   char nascimento[50];
   char telefone[50];
   char endereco[50];
   int cep;
   char local [50];
   int numero_casa;
   char bairro[50];
   char cidade[50];
   char estado[50];
   int senha;
   int excluido;
   double diferencial;
   
};

struct cp{	
	
	float saldo;
	char tipo [50]; 
	int agencia;
	int numero_conta;
	char limite[30];
    char vencimento [50];
	char nome[50];
	char cpf[50];
	char nascimento[50];
	char telefone[50];
	char endereco[50];
	int cep;
	char local [50];
	int numero_casa;
	char bairro[50];
	char cidade[50];
	char estado[50];
	int senha;
	int excluido;
};

void MenuInicial(int x); // fun��o para mostrar as op��es de menu e chamar as fun��es

int Insere_cp(cp conta); //fun��o para inserir conta poupan�a

int Insere_cc(cp conta); // fun��o para inserir conta corrente

int insere_funcionario(fun funcionario); // fun��o para inserir funcionario

void remove_conta(int numero_conta); // fun��o para remover conta

void consulta_conta(int numero_conta); // fun��o para consultar conta

void consulta_funcionario(int numero_conta); // fun��o para consultar funcionario

void consulta_cliente(int numero_conta); // fun��o para consultar cliente

void altera_conta(int numero_conta);

void altera_cliente(int numero_conta);

void altera_funcionario(int codigo);

void mostrar_saldo(int senha);

void deposita_conta(int numero_conta, float deposito);

void saque(int senha);

void ver_limite (int senha);
