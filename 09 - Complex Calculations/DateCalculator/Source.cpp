/*
*	Date: 2020/12/03
*	Author: Luis Marquez
*	Description:
*			//
*/


#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


//	HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//run(): This is the function i wich we'll run all the other functions in this program
void run(int args, char* argsv[]) {

	time_t oneDay_seconds = 24 * 60 * 60;
	time_t today = time(NULL);
	time_t nextDate;

	nextDate = today + oneDay_seconds * atoi(argsv[0]);

	printf("%s\n", ctime(&nextDate));

}


//main()This is the main function
int main(int args, char* argsv[]) {
	run(args, argsv);
	return 0;
}