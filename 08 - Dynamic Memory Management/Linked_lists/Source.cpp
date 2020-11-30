/*
*	Date: 2020/11/30
*	Author: Luis Marquez
*	Description:
*			This is a simple program to learn how to use linked lists
*/


//HEADERS
#include <stdio.h>
#include <cstdlib>


//Defining the struct node
typedef struct Node {
	int number;
	//Autoreferenced structure
	struct Node* next;
} NODE;


NODE* createNode(int number) {
	NODE* newNode;

	newNode = (NODE*)malloc(sizeof(NODE));

	newNode->next = NULL;

	newNode->number = number;

	return newNode;
}


//run(): On this function we'll run all the other functions written on this program
void run() {
	NODE* start = NULL;
	NODE* current;
	char goOn;
	int listSize = 0;
	int number;


	do {
		printf("The list have %d nodes... Type the next number of the list(0 to finalize): ",listSize);
		scanf_s("%d", &number);
		printf("\n");

		if (number) {
			if (start == NULL) {
				start = createNode(number);
				listSize++;
			}
			else {
				current = start;
				while (current->next) {
					current = current->next;
				}
				current->next = createNode(number);
				listSize++;
			}
			goOn = 1;
		}
		else {
			goOn = 0;
		}


		current = start;
		printf("the list content is: \n");
		while (current) {
			printf("%d", current->number);
			printf(current->next ? ", ": "\n");
			current = current->next;
		}


	} while (goOn);

}


//main(int arg, char* argv[]): This is the main funcion
int main(int arg, char* argv[]) {
	run();
	return 0;
}