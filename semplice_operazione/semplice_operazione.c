#include <stdio.h>
/*
 * semplice_operazione.c
 *
 *  Created on: 15 mar 2020
 *      Author: utente
 */
int main(int argc, char**argv){
	float a;
	float b;
	char op;
	short test;
	float res;
	printf("Scrivi l'operazione da svolgere nella sequenza op, num, num:\n");
	test=scanf("%c %f %f", &op, &a, &b);
	if(test==3){ // controllo che lo scanf abbia letto correttamente i dati
		if(op=='+'){
			res=a+b;
			printf("Il risultato è: %.3f", res);
			return 0;
		}
		if(op=='-'){
			res=a-b;
			printf("Il risultato è: %.3f", res);
			return 0;
		}
		if(op=='*'){
			res=a*b;
			printf("Il risultato è: %.3f", res);
			return 0;
		}
		if(op=='/'){
			if(b==0){
				printf("Non puoi dividere per 0, ciao!");
				return -1;
			}
			res=a/b;
			printf("Il risultato è: %.3f", res);
			return 0;
		}
	}
	printf("Mi hai dato dei valori non validi, ciao!");
	return -1;
}
