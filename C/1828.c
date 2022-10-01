//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

///////////////////////////////////////
// Pedra-Papel-Tesoura-Lagarto-Spock //
// 				BAZINGA!			 //
///////////////////////////////////////

///////////////////////////////////
// > Vitória Sheldon: Bazinga!	 //
// > Vitória Raj: Raj trapaceou! //
// > Empate: De novo!			 //
///////////////////////////////////



#include <stdio.h>
#include <string.h>

int main()
{
	int casos, cont = 1;
	char Sheldon[10], Raj[10];
	
	scanf("%d", &casos);
	
	while(cont <= casos)
	{
		scanf("%s %s", Sheldon, Raj);
		printf("Caso #%d: ", cont);
		

		
		/////////////////////////////////////
		//  CASO 1: tesoura corta o papel  //
		/////////////////////////////////////
		
		if (strcmp(Sheldon, "tesoura") == 0 && strcmp(Raj, "papel") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "tesoura") == 0 && strcmp(Sheldon, "papel") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		//////////////////////////////////////
		//  CASO 2: papel embrulha a pedra  //
		//////////////////////////////////////
		
		else if (strcmp(Sheldon, "papel") == 0 && strcmp(Raj, "pedra") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "papel") == 0 && strcmp(Sheldon, "pedra") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		//////////////////////////////////////
		//  CASO 3: pedra esmaga o lagarto  //
		//////////////////////////////////////
		
		else if (strcmp(Sheldon, "pedra") == 0 && strcmp(Raj, "lagarto") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "pedra") == 0 && strcmp(Sheldon, "lagarto") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		////////////////////////////////////////
		//  CASO 4: lagarto envenena o Spock  //
		////////////////////////////////////////
		
		else if (strcmp(Sheldon, "lagarto") == 0 && strcmp(Raj, "Spock") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "lagarto") == 0 && strcmp(Sheldon, "Spock") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		///////////////////////////////////////
		//  CASO 5: Spock destrói a tesoura  //
		///////////////////////////////////////
		
		else if (strcmp(Sheldon, "Spock") == 0 && strcmp(Raj, "tesoura") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "Spock") == 0 && strcmp(Sheldon, "tesoura") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		//////////////////////////////////////////
		//  CASO 6: tesoura decapita o lagarto  //
		//////////////////////////////////////////
		
		else if (strcmp(Sheldon, "tesoura") == 0 && strcmp(Raj, "lagarto") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "tesoura") == 0 && strcmp(Sheldon, "lagarto") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		////////////////////////////////////
		//  CASO 7: lagarto come o papel  //
		////////////////////////////////////
		
		else if (strcmp(Sheldon, "lagarto") == 0 && strcmp(Raj, "papel") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "lagarto") == 0 && strcmp(Sheldon, "papel") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		////////////////////////////////////
		//  CASO 8: papel contesta Spock  //
		////////////////////////////////////
		
		else if (strcmp(Sheldon, "papel") == 0 && strcmp(Raj, "Spock") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "papel") == 0 && strcmp(Sheldon, "Spock") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		//////////////////////////////////////
		//  CASO 9: Spock vaporiza a pedra  //
		//////////////////////////////////////
		
		else if (strcmp(Sheldon, "Spock") == 0 && strcmp(Raj, "pedra") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "Spock") == 0 && strcmp(Sheldon, "pedra") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		///////////////////////////////////////
		//  CASO 10: pedra quebra a tesoura  //
		///////////////////////////////////////
		
		else if (strcmp(Sheldon, "pedra") == 0 && strcmp(Raj, "tesoura") == 0)
			printf("Bazinga!\n");
		
		else if (strcmp(Raj, "pedra") == 0 && strcmp(Sheldon, "tesoura") == 0)
			printf("Raj trapaceou!\n");
		
		
		
		///////////////////////
		//  CASO 11: empate  //
		///////////////////////
		
		else
			printf("De novo!\n");
		
		cont++;
	}
		
	
	return 0;
}