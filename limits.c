#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */



void write_str(char *s)
{
	int i = 0;

	if(s == NULL) /* si ma chaine est null je retourne */

		return;

        while (s[i] != '\0') /* fait moi une boucle de mon tableau i et arrete toi */
		{
                write(1, &s[i++], 1); /* ecrit moi a la sortie standart et l'adresse du caractere puis incremente */
		}
	}
/**
 *
 *
 *
 *
 */


void write_char(char c)
{
	write(1, &c, 1);
}

void write_nbr(int n)
{
	if (n == -2147483648)
{
		write(1, "-2147483648", 11);
			return;
}

	if (n < 0)
{
		write_char('-');
		n = -n;
}

	if (n > 9)
		write_nbr(n / 10);

	write_char((n % 10) + '0');
}
/**
 *
 *
 *
 *
 */

int write_char(char *ch)

        if (ch == NULL)
{
                return (0);

        write(1, &ch,1);
}

/**
 *
 *
 *
 *
 */

int write_float(int *numbers)

	if (numbers == NULL)

		return (0)



