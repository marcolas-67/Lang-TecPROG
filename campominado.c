#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bandeira 9
#define bomba 0


/* Aula 16 - LTP 
   Campo Minado em C*/

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int campo[9][9];
	int casax, casay, i, j;
	
	
	for (i=0; i<9; i++){
		for(j=0; j<9; j++){
			campo[i][j] = 9;
		}
	}
	
	for (i=0; i<9; i++){
		for(j=0; j<9; j++){
			if (rand() % 10 ==0) campo[i][j] = 0;
		}
	}
	printf("\nCAMPO MINADO\n");
	for (i=0; i<9; i++){
		for(j=0; j<9; j++){
			//printf("|%d", campo[i][j]);
			if(campo[i][j] == 0) printf("|9");
			else printf("|%d", campo[i][j]);
		}
		printf("|\n");
	}
	return 0;
}
