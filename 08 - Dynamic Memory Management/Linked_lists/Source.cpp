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


//deleteNode(): This is a function in whic we delete a node given a key
bool deleteNode(int key, NODE **start) {
	//case 1 -> First
	//case 2 -> Other/Last
	//case 3 -> Not found

	NODE* current = *start;
	NODE* previous = NULL;

	while (current->next) {
		if (current == *start && current->number == key) {
			*start = current->next;
			current = current->next;
			return true;
		}

		if (key == current->number) {
			previous->next = current->next;
			free(current);
			return true;
		}
		else {
			previous = current;
			current = current->next;
		}
	}
	return false;
}


//run(): On this function we'll run all the other functions written on this program
void run() {
	NODE* start = NULL;
	NODE* current;
	NODE* next;
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


	printf("Type the number you want to delete: ");
	scanf_s("%d", &number);

	if (deleteNode(number, &start)) {
		printf("\n %d successfully deleted...\n The new list is:\n\n", number);

		current = start;
		while (current) {
			printf("%d", current->number);
			printf(current->next ? ", " : "\n");
			current = current->next;
		}

	}
	else {
		printf("\nNumber wasn't found...\n");
	}


	current = start;
	while (current) {
		next = current->next;
		free(current);
		current = next;
	}
}


//main(int arg, char* argv[]): This is the main funcion
int main(int arg, char* argv[]) {
	run();
	return 0;
}