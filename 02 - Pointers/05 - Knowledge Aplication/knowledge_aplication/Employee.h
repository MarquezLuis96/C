#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

//CONST: Const for chararrays
const int MAX = 25;


//TYPEDEF
typedef int	ID;
typedef char NAME[25];
typedef char SURNAME[25];
typedef int AGE;
typedef char EMAIL[30];
typedef bool STATE;


class Employee
{
	private:
		//ATTRIBUTES
		ID id;
		NAME name;
		SURNAME surname;
		AGE age;
		EMAIL email;
		STATE state;


	public:
		//CONSTRUCTOR 1
		Employee() {
			id = NULL;
			*name = NULL;
			*surname = NULL;
			age = NULL;
			*email = NULL;
			state = false;
		}

		//CONSTRUCTOR 2
		Employee(int _id, const char* _name, const char* _surname, int _age, const char* _email) {
			id = _id;
			strcpy_s(name, _name);
			strcpy_s(surname, _surname);
			age = _age;
			strcpy_s(email, _email);
			state = true;
		}

		//PRINTEMP(): THIS METHOD PRINTS THE CURRENT EMPLOYEE
		void printEmp() {
			printf("ID: %d\n", id);
			printf("NAME: %s\n", name);
			printf("SURNAME: %s\n", surname);
			printf("AGE: %d\n", age);
			printf("EMAIL: %s\n", email);
		}


		//changename(): Yhis method changes the name of the employee
		void changename(const char* newName) {
			strcpy_s(name, newName);
		}


		//GETSTATE(): This method returns the state of use of the object
		bool getState() {
			return state;
		}


		//GETID(): This method returns the ID of user of the object
		ID getID() {
			return id;
		}
};


class EmployeeArray {
	private:
		//ATTRIBUTES
		Employee eArray[MAX];

	public:
		//VERIFY()
		int buscar(int n) {
			for (int i = 0; i < MAX; i++) {
				if (eArray[i].getID() == n) {
					return i;
				}
			}
			return -1;
		}

		//VERIFY()
		bool verify(int n) {
			for (int i = 0; i < MAX; i++) {
				if (eArray[i].getID() == n) {
					return true;
				}
			}
			return false;
		}


		//ADDEMP
		void addEmp(Employee e) {
			if (verify(e.getID()) == false) {
				for (int i = 0; i < MAX; i++) {
					if (this->eArray[i].getState() == false) {
						this->eArray[i] = e;
						break;
					}
				}
			}
			else {
				printf("The employee already exist");
			}
		}

		//PRINTLIST(): THIS METHOD PRINTS ALL THE EMPLOYEES ON THE LIST
		void printlist() {
			for (int i = 0; i < MAX; i++) {
				if (eArray[i].getState() == true) {
					eArray[i].printEmp();
				}
			}
		}


		//changename
		void changename(int n) {
			int ver = buscar(n);
			if (ver >= 0 && ver < MAX) {
				char nn[25];
				printf("New name: ");
				cin.getline(nn, 25);
				eArray[ver].changename(nn);
			}
			else {
				printf("i didn't find the user\n");
			}

		}
};