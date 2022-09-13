#include <unistd.h>
int print_alphabet(int)
{
	return (write(1, abcdefghijklmnopqrstuvwxyz'\n', 27));
}
