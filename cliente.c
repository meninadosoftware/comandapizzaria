#include <stdio.h>
#include <conio.h>

void cliente() {
	printf("\n \n Voce escolheu a opcao: CLIENTE ");
	
	  struct cadastro_de_cliente {
	  	char nome[50];
	  	char aniversario[6];
	  	char email[50];
	  	char endereco[50];
	  	char telefone[11];
	  	
	  };
	  struct cadastro_de_cliente cliente;
	  
	  printf("*****************************CADASTRO DE CLIENTE****************************\n\n");
	  printf(" NOME DO CLIENTE: \n");
	  fflush(stdin);
	  fgets(cliente.nome, 50, stdin);
	  
	  printf(" EMAIL DE CLIENTE: \n");
	  fflush(stdin);
	  fgets(cliente.email, 50, stdin);
	  
	  printf(" ENDERECO DE CLIENTE: \n ");
	  fflush(stdin);
	  fgets(cliente.endereco, 50,  stdin);
	  
	  
	  printf("INFORME O NUMERO DE TELEFONE:\n");
	  scanf("%s", &cliente.telefone);
	  
	  printf("INFORME A DATA DO SEU ANIVERSARIO:\n");
	  scanf("%s", &cliente.aniversario);
	  
	  printf("################################LENDO AS INFORMACOES DO CLIENTE################################\n");
	  printf("nome:%s", cliente.nome);
	  printf("aniversario:%s", cliente.aniversario);
	  printf("email:%s",cliente.email);
	  printf("endereco:%s", cliente.endereco);
	  printf("telefone:%s", cliente.telefone);
	  getch();
	  return(0);
	  
	  
}


