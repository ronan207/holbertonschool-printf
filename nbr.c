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