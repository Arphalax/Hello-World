// LearnC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
void isEven(int *p1); //Even/odd number check
void arrayPrint(int p1); //Print values of Array
void pointerSample(); //Prints some pointer testing.
void printRamp(); //prints a ramp.




int main()
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
	
	int arr[20]; // Averiguar como hacer para definir el tamaño dinamicamente. !!!!!!!!!!!!
	printf("You have a %d element array, and this are the elements values:\n", p1);

	for (int i = 0; i < p1; i++) {
		arr[i] = i;
		printf("%d", arr[i]);

	} // for end

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

