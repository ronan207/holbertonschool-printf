#include <unistd.h>

int print_float(double f, int precision)
{
	int count = 0;
	int int_part = (int)f;
	double frac = f - int_part;

	if (f < 0)
	{
		count += write(1, "-", 1);
		int_part = -int_part;
		frac = -frac;
	}

	count += print_number(int_part);
	count += write(1, ".",1);

	for (int i = 0; i < precision; i++)
		frac *= 10;

	count += print_number((int)(frac + 0.5));

	return count;
}
