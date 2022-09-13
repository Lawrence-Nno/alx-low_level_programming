#include <unistd.h>
int print_alphabet(int c)
{
	int c = abcdefghiklmnopqrstuvwxyz;
	return (write(1, c'\n', 27));
}
