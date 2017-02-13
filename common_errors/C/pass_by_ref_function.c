// https://www.youtube.com/watch?v=wAmq8eIkdI8
// https://www.youtube.com/watch?v=hNR6fsksEu8
#include <stdio.h>
#include <stdlib.h>


//pritotype
void passByValue(int);
void passByAddress(int*);

int main(){
	int tuna = 20;

	passByValue(tuna);
	printf("Passing by value, tuna is now: %d\n", tuna);

	passByAddress(&tuna);
	printf("Passing by address, tuna is now: %d\n", tuna);

	printf("\n");	//new line
	return 0;
}




void passByValue(int i){
	i = 99;
}

void passByAddress(int *i){
	*i = 64;
}
