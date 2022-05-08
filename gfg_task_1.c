#include <stdio.h>

int main()
{
	char string[] = "A string.";
	char *p = string;
	printf("%c %d %c\n", string[0], p, string[3]);
	p += 2;
	printf("%d %c %c", p, *(p + 2), *(p + 5));
}