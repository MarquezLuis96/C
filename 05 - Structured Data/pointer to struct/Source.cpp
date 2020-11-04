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

struct employee {
	char name[MAX];
	int age = 0;
};

void fillPersonalData(struct employee* person, const char* name, int age) {
	if (strlen(name) < MAX) {
		strcpy_s(person->name, name);
	}
	person->age = age;
}

//main
int main(int argc, char * argv[]) {
	struct employee person;

	if (argc < 3) {
		printf("Type the name and the age, please... \n");
	}

	fillPersonalData(&person, argv[1], atoi(argv[2]));

	printf("\nName: '%s', Age: %d\n", person.name, person.age);

	return 0;
}