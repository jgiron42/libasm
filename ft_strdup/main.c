#include <libc.h>

char *ft_strdup(char *src);

int	main(int argc, char **argv)
{
	int	i = 0;
	char	*dst1;
	char	*dst2;

	while (++i < argc)
//		ft_strdup(argv[i]);
//		printf("ft_strdup: %s\nstrdup:    %s\n", ft_strdup(argv[i]), strdup(argv[i]));
		printf("strdup: %s\n", ft_strdup("abc"));
}
