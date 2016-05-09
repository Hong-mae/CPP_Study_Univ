#include <stdio.h>
void main()
{
	char str[100];
	int i, count = 0;
	printf("ют╥б : ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	printf("reverse : ");
	for (i = count - 1; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");
}
