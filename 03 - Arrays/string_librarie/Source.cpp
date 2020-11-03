/*
	Date: 2020/11/03
	Author: Luis Marquez
	Description:
		A simple program where i learn how to use the librarie string.h
*/

//Headers
#include <stdio.h>
#include <string.h>

//run()
void run() {
	char str1[10] = "Luis";
	char str2[10] = "Jose";
	char aux[10] = "";

	printf("The name '%s' have a length of %d characters\n", str1, strlen(str1));
	printf("The name '%s' have a length of %d characters\n", str2, strlen(str2));

	printf("The names %s & %s %s have the same length\n", str1, str2, strcmp(str1, str2) == 0 ? "doesn't" : "");

	printf("Before strcpy()");
	printf("Content in:\n\tstr1='%s'\n\tstr2='%s'\n",str1, str2);

	strcpy_s(aux,str1);
	strcpy_s(str1, str2);
	strcpy_s(str2, aux);

	printf("After strcpy()");
	printf("Content in:\n\tstr1='%s'\n\tstr2='%s'\n", str1, str2);
}

//main()
int main() {
	run();
	return 0;
}