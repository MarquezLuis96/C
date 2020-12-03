/*
*	Date: 2020/12/03
*	Author: Luis Marquez
*	Description:
*			//
*/


//	HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//run(): This is the function i wich we'll run all the other functions in this program
void run(int args, char* argsv[]) {
	srand(time(NULL));
	printf("%d\n", rand());
}


//main()This is the main function
int main(int args, char* argsv[]) {
	run(args, argsv);
	return 0;
}