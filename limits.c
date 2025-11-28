#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int write_char(char *ch)
{
	if (ch == NULL)
	{
		return (1);

	}
	write(1, &ch,1);

		return (0);
}





