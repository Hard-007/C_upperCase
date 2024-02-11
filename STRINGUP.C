#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	int i, k;
	char str[30];

	printf("Char converter BY HARD.0_0.7\n");

	do{
		printf("\nDigite uma string:\n");
		scanf("%30[^\n\t]", &str);

		for(i=0; i<strlen(str); i++){
			if((int)str[i] > 96) printf("%c", (int) str[i] - 32);
			else printf("%c", (int) str[i]);
		}

		printf("\n\nDeseja terminar o programa ? 1.Sim 2.Nao\n");
		scanf("%d", &k);
	}while(k!=1);

	getch();
	clrscr();
}