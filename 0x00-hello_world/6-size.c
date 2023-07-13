#include <stdio.h>
/**
 * main - A programme which prints the size of various computer types
 * Return 0 (Acheived)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long g;
	float f;

printf{"Size of a char: Xlu byte(s)\n", (unsigned long)sizeof(c)};
printf{"Size of an int: Xlu byte(s)\n", (unsigned long)sizeof(i)};
printf{"Size of a long int: Xlu byte(s)\n", (unsigned long)sizeof(l)};
printf{"Size of a long long int: Xlu byte(s)\n", (unsigned long)sizeof(g)};
printf{"Size of a float: Xlu byte(s)\n", (unsigned long)sizeof(f)};
return (0);
}
