// LearnC.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
void isEven(int *p1); //Even/odd number check
void arrayPrint(int p1); //Print values of Array
void pointerSample(); //Prints some pointer testing.
void printRamp(); //prints a ramp.




int main(int argc, char *argv[])
{
	int x = 6;
	int n = 10;
	isEven(&x);


	arrayPrint(n);

	pointerSample();

	printRamp();

	getchar();
    return 0;
} // main() end

void isEven(int *p1) {
	if (*p1 % 2 == 0) {
		printf("Yes, %d is even\n", *p1);
	} //if end
	else {
		printf("No, %d is odd.\n", *p1);
	} //else end
} // isEven() end

void arrayPrint(int p1) {
  //asumimos que p1 contiene un entero con el tama√±o del arreglo
	int *arr; // arr es un apuntador a entero
	
	arr = (int*)malloc(sizeof(int) * p1);
	//queremos un arreglo de p1 enteros
	//si el sistema ha concedido la memoria
	//arr contendra la direccion del inicio de esa memoria
	if (arr != NULL){
	  printf("You have a %d element array, and this are the elements values:\n", p1);

	  for (int i = 0; i < p1; i++) {
	    arr[i] = i;
	    printf("%d", arr[i]);
	  } // for end

	  //ya acabamos de jugar con el segmento de memoria
	  //uno de tantos √habitos para disinguirnos de
	  //las bestias es liberar la memoria que pedimos 
	  free(arr);
	}//final de if arr not null
	else{ //el sistema no concedio la memoria, ya valio
	  printf ("no hay memoria suficiente para %d elementos\n", p1);
	}//fin del else donde no obtuvimos la memoria

	printf("\n");

} // arrayPrint() end

void pointerSample() {
	int yy = 10;
	int *a = &yy;
	int xx = yy;
	printf("valor yy: %d, valor pointer *a: %d\n", yy, *a);
	printf("valor xx: %d, valor pointer *a: %d\n\n", xx, *a);

	*a += 8;

	printf("valor yy: %d, valor pointer *a: %d\n", yy, *a);
	printf("valor xx: %d, valor pointer *a: %d\n\n", xx, *a);
} // pointerSample() end

void printRamp() {
	int xx = 10;
	int yy = 10;
	int zz = 0;

	for (int i = 0; i < yy; i++) {
		for (int i = 0; i < xx; i++) {
			printf("-");
			
		} // for xx end
		xx -= 1;
		//printf("\n");

		for (int i = 0; i < zz; i++) {
			printf("*");
		} // for zz end
		zz += 1;
		printf("\n");
	} // for yy end


} // printRamp() end

