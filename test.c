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
	char *prenom = "Luca";
	char *nom = "Gimenez";
	char lettre = 'C';

	_printf("Je m'apelle %s, mon nom est %s, et ma lettre est %c", prenom, nom, lettre);
	_printf("Mon prénom commence par la lettre %c", lettre);
	_printf("%c");
	_printf("%s");
    return (0);
}
