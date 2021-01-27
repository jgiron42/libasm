#include "libasm.h"

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", strcmp(argv[1], argv[2]));
	return (0);
}
