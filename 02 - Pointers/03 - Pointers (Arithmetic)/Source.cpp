/*
	Date: 2020/11/02
	Author: Luis Marquez
	Description:
			//How to increment and decrement pointers
*/

//Header
#include <iostream>
#include <stdio.h>
#include  <stdlib.h>

//run()
void run() {
	//Int pointer declaration
	int n = 5;
	int* pi = &n;

	//Char pointer declaration
	char c = 'A';
	char* pc = &c;

	//Printing values
	printf("\nBefore:\n pi = %p\n pc = %p\n", pi, pc);

	//Increasing
	pi++;
	pc++;

	//Printing values
	printf("\n\nAfter:\n pi = %p\n pc = %p\n", pi, pc);
}

//main()
int main() {
	run();
	return 0;
}