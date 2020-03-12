#include <libc.h>

int	ft_strlen(char	*str);
int	ft_strcmp(const char *s1, const char *s2);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
//	printf("%lu\n\n", strlen(NULL));
//	while(++i < argc)
//		printf("%d\n", ft_strlen(argv[i]));
	if (argc == 3)
		printf("ft_strcmp: %d\nstrcmp:    %d\n", ft_strcmp(argv[1], argv[2]), strcmp(argv[1], argv[2]));
}
