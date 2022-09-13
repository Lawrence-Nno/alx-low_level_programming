#include <unistd.h>
int print_alphabet(int c)
{
	c = abcdefghiklmnopqrstuvwxyz;
	return (write(1, c'\n', 27));
}
