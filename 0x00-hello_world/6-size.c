#include <stdio.h>
/**
 * main - A programme which prints the size of various computer types
 * Return 0 (Acheived)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

printf("Size of a char: Xlu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: Xlu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: Xlu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: Xlu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: Xlu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
