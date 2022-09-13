#include <unistd.h>
int print_alphabet(int alpha)
{
	int alpha = abcdefghijklmnopqrstuvwxyz'\n';
	return (write(1, alpha, 27));
}
