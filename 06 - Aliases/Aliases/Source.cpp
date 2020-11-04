/*
	Date: 2020/11/04
	Author: Luis Marquez
	Description:
			Learning how to use aliases.
			Its easier to use aliases than to edit all the code if i have to make
			a small change in the data type for example.
*/

//HEADER
#include <stdio.h>
const int MAX = 100;

//ALIASES
typedef const char* NAME;
typedef int AGE;

//STRUCT
struct employee {
	NAME name;
	AGE age;
};

typedef employee emp;


//MAIN
int main() {

	emp person;

	person.name = "Luis";
	person.age = 24;

	printf("\nName: %s\nAge: %d\n", person.name, person.age);

	return 0;
}