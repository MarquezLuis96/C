/*
	Date: 2020/11/02
	Author: Luis Marquez
	Description:
			//
*/

//Headers
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//duplicate(int)
void duplicate(int* n) {
	*n *= 2;
}

//run()
void run() {
	//Normal variable declaration
	int a = 5;

	//Printing the value of a
	printf("\nBefore duplicate a = %d\n", a);

	//Passing the value of a by reference
	duplicate(&a);

	//Printing the value after duplication
	printf("\nAfter duplicate a = %d\n", a);
}

//main()
int main() {
	run();
	return 0;
}