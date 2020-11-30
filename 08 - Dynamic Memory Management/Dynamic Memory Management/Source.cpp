/*
*	Date: 2020/11/29
*	Author: Luis Marquez
*	Description:
*			This is  a program to learn how to use the dynamic memory.
*/


//HEADERS
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>


using namespace std;


//DEFINITIONS
const int MAX = 100;
typedef char NAME[MAX];
typedef char EMAIL[MAX];


//CONTACT STRUCTURE
typedef struct {
	NAME name;
	EMAIL email;
}CONTACT;


//RUN(): This is the function in wich we'll run all the other functions written on our program
void run(int argc, const char* argv[]) {
	CONTACT *list = NULL;
	char buffer[MAX];
	int goOn, listSize = 0;

	do {
		printf("Type the name of the new contact (Or type '0' to exit): ");
		//scanf_s("%99s", buffer);
		cin.getline(buffer, (MAX-1));
		if (strcmp("0", buffer) != 0) {
			if (!list) {
				list = (CONTACT*) malloc(sizeof(CONTACT));
			}
			else {
				list = (CONTACT*) realloc(list, sizeof(CONTACT) *(listSize+1));
			}
			strcpy_s(list[listSize].name, buffer);


			printf("Type the %s email:", buffer);
			//scanf_s("%s", buffer);
			cin.getline(buffer, (MAX-1));
			strcpy_s(list[listSize].email, buffer);


			goOn = 1;
			listSize++;
		}
		else {
			goOn = 0;
		}
	} while (goOn);


	printf("\nThis is your contact list:\n");
	printf("Name:\t\tEmail:\n");

	for (int i = 0; i < listSize; i++) {
		printf("%s\t\t%s\n", list[i].name, list[i].email);
	}
}


//MAIN(): This is the main function of the program.
int main(int argc, const char *argv[]) {
	run(argc, argv);
	return 0;
}