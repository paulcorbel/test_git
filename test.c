#include <stdio.h>

/*
%c char  (a single character)
%d int  (a whole number)
%e float or double exponential format (float are numbers with a fractional part)
%f float or double signed decimal
%g float or double use %f or %e as required
%o int unsigned octal value
%p pointer address stored in pointer
%s array of char sequence of characters
%u int unsigned decimal
%x (%X) int unsigned hex value
ma_variable = contenu de la variable (exemple ma_variable = 15)
&ma_variable = adresse où est stockée la variable
*/

int main(vold)
{
	int age_utilisateur = 0;

	signed char lettre = 'A';

	printf("Entrez une lettre : ");
	scanf("%c", &lettre);

	printf("Lettre choisie => %c\n", lettre);

	printf("Je veux voir si mes modifs fonctionnent sur Git\n");

	return 0;
} 	
