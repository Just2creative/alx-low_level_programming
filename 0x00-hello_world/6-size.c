#include <stdio.h>
/**
 * main - program printing sizes of computer types
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
