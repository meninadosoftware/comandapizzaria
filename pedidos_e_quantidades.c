#include <stdio.h>
#include <conio.h>

void pedidos_e_quantidades()
{
	printf("\n Voce escolheu a opcao:  PEDIDOS E QUANTIDADES\n");
	
	 struct solicitar_pedidos_e_quantidades {
	 	
	 	char pedidos[50];
	 	char quantidades[50];
	 };
	
	struct solicitar_pedidos_e_quantidades solicitar;
	
	printf("#####################SOLICITAR PEDIDOS E QUANTIDADES########################\n");
	
	printf("SOLICITAR PEDIDO:\n");
	fflush(stdin);
	fgets(solicitar.pedidos,50, stdin);
	
	
	printf("INFORME A QUANTIDADE QUE DESEJA:\n");
	fflush(stdin);
	fgets(solicitar.quantidades,50, stdin);
	
	printf("pedido:\n %s",solicitar.pedidos);
	printf("quantidade:\n %s", solicitar.quantidades);
	getch();
	return(0);
}
