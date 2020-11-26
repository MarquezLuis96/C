/*
	Date: 2020/11/26
	Author: Luis Marquez
	Description:
			This is a program in wich i'll practice all the thigs that i've learned until now on this course
			specially pointers
*/


//HEADERS
#include <stdio.h>
#include "Employee.h"


//run(): On this function we'll run all the other functions of the project
void run() {
	EmployeeArray ea;

	Employee e(25687494, "Luis", "Marquez", 24, "englamc@gmail.com");
	ea.addEmp(e);

	Employee f(11418311, "Loly", "Arroyo", 70, "loly48@gmail.com");
	ea.addEmp(f);

	ea.printlist();


	Employee g(27041258, "Gabriel", "Cova", 21, "grfcv0831998@gmail.com");
	ea.addEmp(g);

	ea.changename(11418311);

	ea.printlist();
}


//main(): This is the main function
int main() {
	run();
	return 0;
}