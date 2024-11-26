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
    char *prenom = "Etienne";
    char lettre = 'C';
    _printf("Je m'appelle %s", prenom);
    _printf("Mon prénom comence par la lettre %c", lettre);
    return (0);
}
