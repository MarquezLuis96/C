/*
	Date: 2020/11/04
	Author: Luis Marquez
	Description:
			Learning how to use arguments CLI
*/

//Headers
#include <stdio.h>
#include <string.h>

//main()
int main(int argc, const char* argv[]) {

	char buffer[20];
	char buffer2[] = "this will be overwritten";

	printf("Original buffer2: %s\n", buffer2);
	strcpy_s(buffer, argv[1]);
	printf("New buffer2: %s\n", buffer2);

	return 0;
}