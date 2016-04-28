// LearnC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void isEven(int *p1); //Even/odd number check
void arrayPrint(int p1);



int main()
{
	int x = 6;
	isEven(&x);
	int n = 10;

	arrayPrint(&n);

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

void arrayPrint(int *p1) {
	int arr[*p1];
	printf("You have a %d element array, and this are the elements values:\n", *p1);

		for (int i = 0; i < *p1; i++) {
			arr[i] = i;
			printf("%d", arr[i]);

		} // for end

} // arrayPrint() end

