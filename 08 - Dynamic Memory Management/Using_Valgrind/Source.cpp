/*
*	Date: 2020/11/30
*	Author: Luis Marquez
*	Description:
*			This is a program to learn how to use valgrind
*/


//header
#include <stdio.h>
#include <cstdlib>


//run(): on this function we'll run all the other functions written in this program
void run() {
	char* p = NULL;

	for (int i = 0; i < 10; i++) {
		printf("%d - Allocating 50 bytes of memory...\n", i);
		if (p) {
			free(p);
		}
		p = (char*) malloc(sizeof(char) * (50));
	}

	printf("The program is finished\n");
	free(p);
}


//main(int arg, char* argv[]): This is the main function of the program
int main(int arg, char* argv[]) {
	run();
	return 0;
}