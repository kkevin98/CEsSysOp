/*
 * getchar-reverse.c
 *
 *  Created on: 30 mar 2020
 *      Author: utente
 */

	// ESERCIZIO 2:

	// scrivere il seguente programma:

	// legge e salva (in memoria) tutti i dati provenienti da stdin fino a EOF

	// poi scrive su stdout i dati accumulati ma all'incontrario (dall'ultimo al primo)

	// suggerimenti: utilizzare getchar(), calloc(), realloc()


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	char * memory;
	memory=calloc(1, sizeof(char));
	char c=getchar();
	long i=0;

	//se non riesco ad allocare la memoria
	if(memory==NULL){
		perror("calloc error!");
		exit(EXIT_FAILURE);
	}

	while(c!=EOF){
		memory[i]=c; 									//salvo quello che ho letto nella "memoria"
		i++; 		 									//incremento il contatore di quello che ho letto
		memory=realloc(memory, (i+1)*sizeof(char));		//ridimensiono la memoria per inserire altri caratteri
		if(memory==NULL){								//se non riesco a ridimensionare la memoria
			perror("realloc error!");
			exit(EXIT_FAILURE);
		}
		c=getchar();
	}

	printf("\n");

	for(long j=i-1; j>=0; j--){					//stampo al contrario
		printf("%c", memory[j]);
	}

	printf("\n");

	printf("Ho raccolto e stampato %lu caratteri\n", i);

	return 0;
}


