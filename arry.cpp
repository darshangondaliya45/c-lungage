// C Program to illustrate strings
#include <stdio.h>

int main()
{

	// creating array of character
	char arr[8] = { 'D', 'a', 'r', 's', 'h','a','n', '\0' };

	// printing string
	int i = 0;
	while (arr[i]) {
		printf("%c", arr[i++]);
	}
	return 0;
}
