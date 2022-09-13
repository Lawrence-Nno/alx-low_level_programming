#include <unistd.h>
#include <ctype.h>
int print_alphabet(int c)
{
	c = 'abcdefghijklmnopqrstuvwxyz';
	return (write(1, &c'\n', 27));
}
