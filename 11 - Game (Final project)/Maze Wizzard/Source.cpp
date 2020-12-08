/*
*	Date: 2020/12/07 & 2020/12/08
*	Author: Luis Marquez
*	Description:
*			This is tehe tipical maze game but with wizzarding
*/


//HEADERS
#include "Wizzard.h";
#include "Map.h";


/*	run(int args, char* argsv): This is the run function. On this function we'll run all the other functions
*			written on this program (Source.cpp)
*	Receives:
*		int args: Argument of the main function that specifies the number of arguments
*		char* argsv[]: Argument of the main function that contain the values of the arguments in a str
*	Returns: Nothing (void)
*/
void run(int args, char* argsv) {
	Wizzard magic = Wizzard("Gandalf", "Maia");
	Map map = Map(0, &magic);
	bool go = true;
	do {
		system("CLS");
		if (magic.getHP() <= 0) {
			FILE* file;
			fopen_s(&file, "lose.txt", "r");
			if (!file) {
				cerr << "ERROR, FILE NOT FOUND" << endl;
			}
			else {
				char c;
				while ((c = fgetc(file)) != EOF) {
					printf("%c", c);
				}
				fclose(file);
			}
			go = false;
		}
		else {
			map.printMap(&magic);
			cout << "LIFE: " << magic.getHP() << endl;
			cout << "Type a/s/d/w to move the character: " << endl;
			char pos;
			cin >> pos;
			if (pos == 'a') {
				if (map.getmappixel((magic.getPos()[0]), (magic.getPos()[1] - 1)) == 0) {
					magic.setPos((magic.getPos()[0]), (magic.getPos()[1] - 1));
				}
				else {
					magic.setHP(((magic.getHP()) - (50)));
					cout << "ERROR, YOU CRASH WITH THE WALL" << endl;
					cout << "LIFE: " << magic.getHP() << endl;
				}
			}

			if (pos == 'd') {
				if (map.getmappixel((magic.getPos()[0]), (magic.getPos()[1] + 1)) == 0) {
					magic.setPos((magic.getPos()[0]), (magic.getPos()[1] + 1));
				}
				else {
					magic.setHP(((magic.getHP()) - (50)));
					cout << "ERROR, YOU CRASH WITH THE WALL" << endl;
					cout << "LIFE: " << magic.getHP() << endl;
				}
			}


			if (pos == 's') {
				if (map.getmappixel((magic.getPos()[0] + 1), (magic.getPos()[1])) == 0) {
					magic.setPos((magic.getPos()[0] + 1), (magic.getPos()[1]));
				}
				else {
					magic.setHP(((magic.getHP()) - (50)));
					cout << "ERROR, YOU CRASH WITH THE WALL" << endl;
					cout << "LIFE: " << magic.getHP() << endl;
				}
			}

			if (pos == 'w') {
				if (map.getmappixel((magic.getPos()[0] - 1), (magic.getPos()[1])) == 0) {
					magic.setPos((magic.getPos()[0] - 1), (magic.getPos()[1]));
				}
				else {
					magic.setHP(((magic.getHP()) - (50)));
					cout << "ERROR, YOU CRASH WITH THE WALL" << endl;
					cout << "LIFE: " << magic.getHP() << endl;
				}
			}
		}
	} while (go);
}


/*	main(int args, char* argsv[]): This is the main function.
*	Receives:
*		int args: Specifies the number of arguments
*		char* argsv[]: Contain the values of the arguments in a str
*	Returns: int 0 ---> Everything is ok
*/
int main(int args, char* argsv[]) {
	run(args, *argsv);
	return 0;
}