/*
 * bubblesort.c
 *
 *la funzione bubble_sort ordina l'array passato come parametro
 *array_dimension: numero di celle dell'array
 *
 *  Created on: 23 mar 2020
 *      Author: utente
 */


#include <stdio.h>


int main(int argc, char * argv[]){


	void swap(int *a, int *b){
		int t;
		t=*a;
		*a=*b;
		*b=t;
	}


	void bubble_sort(int * array, int array_dimension) {
		int n=array_dimension;
		while(n>=1){
			int newn=0;
			for(int i=1; i<=(n-1); i++){
				if(array[i-1]>array[i]){
					swap(&array[i-1], &array[i]);
					newn=i;
				}
			}
			n=newn;
		}
	}


	int array[]={123, 2, 27, 12, 98, 06, 1024, 12, 22, 3, -25};
	printf("Questo è l'array prima del sort:\n");
	for(int i=0; i<sizeof(array)/4; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	bubble_sort(array, sizeof(array)/4);
	printf("Questo è l'array dopo il sort:\n");
	for(int i=0; i<sizeof(array)/4; i++){
			printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

