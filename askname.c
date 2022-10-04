/* askname.c */
#include <stdio.h>
#include <string.h>
void askname(char *first, char *last)
{
	printf("Enter your Name: ");
	fgets(first, 255, stdin);
	first[strlen(first)-1] = '\0'; /* remove the newline at the end */
	printf("Now enter your Surname: ");
	gets(last); /* buffer overflow? what's that? */
}