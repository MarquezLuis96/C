/*
	Date: 2020/11/02
	Author: Luis Marquez
	Description:
			A simple program that shows how to use pointers
*/

//Headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//run()
void run() {
	int n;
	int* p;
	p = &n;
	//int *p = &n;
	*p = 5;

	n = 10;

	printf("n: %d	-> 'n' Value \n", n);
	printf("&n: %p	-> 'n' Direction\n", &n);
	printf("*n: Error -> 'n' isn't a pointer\n");
	printf("\n\n\n");
	printf("p: %p	-> 'p' Value -> (Points to -Direction-)\n", p);
	printf("&p: %p	-> 'p' Direction\n", &p);
	printf("*p: %d	-> Value of the variable where p points\n", *p);
}

//main()
int main() {
	run();
	return 0;
}