/*
 * countchars.c
 *
 *  Created on: 30 mar 2020
 *      Author: utente
 */

// ESERCIZIO 1:
	// leggi da stdin fino a EOF e conta i caratteri: '\n', '\t' e ' ' (spazio)
	// dopo EOF, scrive su stdout il numero di occorrenze di ciascuno dei tre caratteri sopra

#include <stdio.h>

int main(int arcg, char * argv[]){

	unsigned long c1=0;
	unsigned long c2=0;
	unsigned long c3=0;
	char c=getchar();

	while(c!=EOF){
		if(c=='\n'){
			c1++;
		}
		if(c=='\t'){
			c2++;
		}
		if(c==' '){
			c3++;
		}
		c=getchar();
	}

	printf("\n");
	printf("Ho trovat %lu caratteri '\\n'\n", c1);
	printf("Ho trovat %lu caratteri '\\t'\n", c2);
	printf("Ho trovat %lu caratteri ' '\n", c3);

	return 0;
}


