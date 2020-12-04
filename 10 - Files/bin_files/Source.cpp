/*
*	Date:2020/12/04
*	Author: Luis Marquez
*	Description:
*			Learning about binary files
*/


//HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


//DEFINING A STARUCTURE
const int BUFFER = 100;
typedef struct Person{
	char name[BUFFER];
	int age;
} PERSON;


//wFile(): This function writes in a binary file
void wFile(const char* name) {
	FILE* file;
	fopen_s(&file, name, "w");

	if (!file) {
		printf("\nAn error has ocurred while trying open the file...\n\n");
	}
	else {
		printf("\nFile open...\n\n");
		char buffer[BUFFER];
		PERSON person;
		char opt;
		do {
			printf("Type the name of the person: ");
			cin.getline(buffer, BUFFER);
			printf("\n");
			strcpy_s(person.name, buffer);

			printf("Type the age of %s: ", person.name);
			cin.getline(buffer,3);
			printf("\n");
			person.age = atoi(buffer);

			fwrite(&person, sizeof(PERSON), 1, file);


			printf("The person is already saved...");
			printf("Do you want to save another person? (y/n)");
			
			scanf_s("%c", &opt);
			cin.ignore();

		} while (opt == 'y' || opt == 'Y');
		fclose(file);
	}
}


void rFile(const char* name) {
	FILE* file;
	fopen_s(&file, name, "r");

	if (!file) {
		printf("\nAn error has ocurred while trying open the file...\n\n");
	}
	else {
		printf("\nFile open...\n\n");
		char buffer[BUFFER];
		PERSON person;
		char opt;

		while (fread(&person, sizeof(PERSON), 1, file)) {
			printf("%s tiene %d años\n\n", person.name, person.age);
		}

		fclose(file);
	}
}


//run(): This is the function in which we'll run all the other functions
void run() {
	//wFile("test.bin");
	rFile("test.bin");
}


//main(): This is the main function
int main(int args, char* argsv[]) {
	run();
	return 0;
}