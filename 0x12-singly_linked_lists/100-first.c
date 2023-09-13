#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_before - Print statement before executing the main function
 *
 * Return: Always 0
 */
void print_before(void) __attribute__((constructor));

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}




