/*
	Date: 2020/11/03
	Author: Luis Marquez
	Description:
			A simple program to learn how to use strings
*/

//Headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//Run()
void run() {
	const char* name = "Luis";

	printf("Name = %s\n*name = %p\n", name, name);

	for (int i = 0; i < 4; i++) {
		printf("dir: (%p) - name[%d] = '%c'\n", name[i], i, name[i]);
	}
}

//Main()
int main() {
	run();
	return 0;
}