#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 80

int countLetter(char* sent, char* sub) {
	int sublen = strlen(sub);
	if (*sent == '\0')
		return 0;
	else if (strncmp(sent, sub, sublen) == 0)
		return (1 + countLetter(sent + 1, sub));
	else
		return (countLetter(sent + 1, sub));
}

int main(void)
{
	char sent[SIZE], sub[SIZE];
	printf("Enter a string: ");
	scanf(" %[^\n]", sent);

	printf("Enter a word to be searched in sentence: ");
	scanf(" %s", sub);

	int num = countLetter(sent, sub);
	printf("\nThe word <%s> occured %d times in the sentence\n", sub, num);
	return 0;
}