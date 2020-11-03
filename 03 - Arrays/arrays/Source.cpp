/*
	Date: 2020/11/03
	Author: Luis Marquez
	Description:
			A simple program to lear how to use arrays
*/

//Headers
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//run()
void run() {
	int array[5];
	
	for (int i = 0; i < 5; i++) {
		array[i] = i * 2;
	}

	for (int i = 0; i < 5; i++) {
		printf("\nArray[%d] = %d\n", i, array[i]);
	}
}


//main()
int main() {
	run();
	return 0;
}