/*
	Date: 2020/11/04
	Author: Luis Marquez
	Description:
		//
*/

//Headers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int MAX = 100;


//data structure
struct employee {
	char name[MAX];
	int age;
};

//main
int main(int argc, char* argv[]) {

	employee person;

	if (argc < 3) {
		printf("Type name and age please\n");
		return 1;
	}

	if (strlen(argv[1]) < MAX) {
		strcpy_s(person.name, argv[1]);
	}

	person.age = atoi(argv[2]);

	printf("\nName = %s, Age = %d\n", person.name, person.age);

	return 0;
}