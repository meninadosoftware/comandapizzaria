#include <stdio.h>
#include <conio.h>

int main(){
	int codigo;
	do{
		comandapizzaria();
		scanf("%d",&codigo);
		erroMenu(codigo);
	}while ((codigo!=1)&& (codigo!=2)&& (codigo!=3)&& (codigo!=4)&& (codigo!=5)&&(codigo!=6));
	
	codigo= codigo;
	
	switch(codigo)
	{
		case 1:
			atendente();
			break;
			
		 case 2:
		 	cliente();
		 	break;
		 	
		case 3:
			precos_e_produtos(codigo);
			break;
			
		case 4:
			pedidos_e_quantidades();
			break;
		
		case 5:
			incluir_excluir(codigo);
			break;
			
		case 6 : 
		    incluir_excluir(codigo);
		    break;
		    
		
}
  system("pause");
  return(0);
}

