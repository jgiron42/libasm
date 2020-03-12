#include <libc.h>

char *ft_strcpy(char *dst, char *src);

int	main(int argc, char **argv)
{
	int	i = 0;
	char	*dst1;
	char	*dst2;

	while (++i < argc)
	{
		dst1 = malloc(strlen(argv[i])+1);
		dst2 = malloc(strlen(argv[i])+1);
		if (strcmp(argv[i], "null") != 0)
		printf("ft_strcpy: %s\nstrcpy:    %s\ndiff:      %d\n", ft_strcpy(dst1, argv[i]), strcpy(dst2, argv[i]), strcmp(dst1, dst2));
		else
		printf("ft_strcpy: %s\nstrcpy:    %s\ndiff:      %d\n", NULL, NULL, strcmp(dst1, dst2));
		
		free(dst1);
		free(dst2);
	}
}
