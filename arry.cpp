#include <stdio.h>

int main()
{


	char arr[8] = { 'D', 'a', 'r', 's', 'h','a','n', '\0' };


	int i = 0;
	while (arr[i]) {
		printf("%c", arr[i++]);
	}
	return 0;
}
