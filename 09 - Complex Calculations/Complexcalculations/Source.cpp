/*
*	Date: 2020/12/03
*	Author: Luis Marquez
*	Description:
*			//
*/


//HEADER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>


//run(): This is the funtion in wich we'll  run all the other functions on this program
void run(int args, char* argsv[]) {
	int a, b;
	a = atoi(argsv[1]);
	b = atoi(argsv[2]);

	printf("La hipotenusa mide %f", sqrt(pow(a,2) + pow(b,2)) );

}


//main(int args, char* argsv[]): This is the main function
int main(int args, char* argsv[]) {
	run(args, argsv);
	return 0;
}