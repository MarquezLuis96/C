/*
*	Date: 2021/01/06
*	Author: Luis Marquez
*	Description:
*			This is a simple program in wich we'll prove the primality of a number
*/


//Libraries
#include <iostream>


//Namespace declaration
using namespace std;


//askInt(): This function receives a char*, prints it and returns the asked interger
int askInt(const char* str) {
	int n;
	cout << str;
	cin >> n;
	return n;
}


//primality(int n): This function receives an interger and make a primality test
bool primality(int number) {
	if (number <= 1) {
		cerr << "The number can't be less than or equal 1...\nTry again...\n" << endl;

		return false;
	}
	else {
		short times = 0;
		int n = number;

		while (n > 0 && times <= 2) {
			if (number % n == 0) {
				times++;
			}
			n--;
		}

		if (times == 2) {
			cout << "The number " << number << " is prime" << endl;
		}
		else {
			cout << "The number " << number << " is not prime" << endl;
		}

		return true;
	}
}


//run(): On this function we'll run all the other functions written on this program
void run(int args, char* argsv[]) {
	bool result;
	do {
		int n = askInt("Type the number you want to test for primality: ");
		result = primality(n);
		if (result) {
			char opc;
			cout << "Do you want to test another number? (y/n)" << endl;
			cin >> opc;
			if (opc == 'y' || opc == 'Y') {
				result = false;
			}
			else {
				result = true;
			}
		}
	} while (!result);
}


//main(int args, char* argsv[]): Main function
int main(int args, char* argsv[]) {
	run(args, argsv);
	return 0;
}