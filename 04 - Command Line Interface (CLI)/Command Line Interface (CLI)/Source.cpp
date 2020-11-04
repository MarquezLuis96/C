/*
	Date: 2020/11/04
	Author: Luis Marquez
	Description:
			Learning how to use arguments CLI
*/

//Headers
#include <stdio.h>

//main()
int main(int argc, char* argv[]) {

	for (int i = 0; i < argc ;i++) {
		printf("Argumento %d = %s\n", i, argv[i]);
	}

	return 0;
}