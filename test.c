#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char prenom = 'C';
	char *nom = "Etienne";
	_printf("Mon prenom est %c, mon nom est %s", prenom, nom);
    return (0);
}
