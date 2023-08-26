#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_statement - Print statement before executing the main function
 *
 * Return: Always 0
 */

void print_statement(void) __attribute__((constructor));

void print_statement(void)
{
	printf("You're beat! and yet, you must allow,\n" "I bore my house upon my back!\n");
}
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}



