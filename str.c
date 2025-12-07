 / **
 * 
 * 
 * 
 * /
 
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
