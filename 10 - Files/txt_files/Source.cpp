/*
*	Date: 2020/12/04
*	Author: Luis Marquez
*	Description:
*			//
*/


//HEADERS
#include <stdlib.h>
#include <stdio.h>
#include <iostream>


using namespace std;


//const
const int BUFFER = 100;


//opnFile(): This is a function that creates or open a text file
void opnFile(const char* name) {
	FILE* file;

	fopen_s(&file, name, "w");

	if (!file) {
		printf("\nAn error has ocurred while trying to open the file\n\n");
	}
	else {
		printf("\nThe file has been created or opened successfully...\n\n");
	}

	fclose(file);
}


//rFile(): This function reads a file
void rFile(const char* name) {
	FILE* file;
	fopen_s(&file, name, "r");


	if (!file) {
		printf("\nAn error has ocurred while trying to open the file \n\n");
	}
	else {
		printf("\nThe file is already open.\nThe content of the file is:\n\n");
		char c;

		while ((c = fgetc(file)) != EOF) {
			printf("%c", c);
		}
	}

	fclose(file);
}


//wFile(): This is a function in wich the user can write in the file
void wFile(const char* name) {
	
	FILE* file;
	fopen_s(&file, name, "w");

	if (!file) {
		printf("\nAn error has ocurred while trying to open the file\n\n");
	}
	else {

		char buffer[BUFFER];
		char opt;

		do {
			printf("Type your sentence...\n\n");
			cin.getline(buffer, 100);
			fputs(buffer, file);
			fputs("\n", file);
			printf("\nDo you want to write another sentence? (y/n)");
			scanf_s("%c", &opt);
			cin.ignore();
		} while (opt == 'Y' || opt == 'y');
	}

	fclose(file);

}


//run(): This is a function in wich we'll run all the other functios of the program
void run(int args, char* argsv[]) {
	//opnFile("test.txt");
	rFile("test.txt");

	printf("\nWritting a new content...\n");

	wFile("test.txt");

	printf("\nPrinting the new content...\n");

	rFile("test.txt");
}


//int main(int args, char* argsv[]): This is the main function
int main(int args, char* argsv[]) {
	run(args, argsv);
	return 0;
}