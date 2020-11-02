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

//run()
void run() {
	int* pi;
	int a = 5;
	int b = 1;

	pi = &a;

	printf("Before:\na = %d\n&a = %p\nb = %d\n&b = %p\npi = %p", a, &a, b, &b, pi);

	pi++;
	*pi = 10;

	printf("After:\na = %d\n&a = %p\nb = %d\n&b = %p\npi = %p", a, &a, b, &b, pi);
}


//main()
int main() {
	run();
	return 0;
}