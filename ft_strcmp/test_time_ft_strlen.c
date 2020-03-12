#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <libc.h>
#ifndef TEST_SIZE
# define TEST_SIZE 100000
#endif

int	ft_strcmp_lmartin(char *str);
int	ft_strcmp(char *str);
int	ft_strcmp_cmarin(char *str);
//int	ft_write_lothieve(int fd, char *str, int nbyte);

int	is_lower(float *list, float element, int size)
{
	int	i;
	float	tmp;

	tmp = INT_MAX;
	i  = -1;
	while (++i < size)
		if (tmp > list[i])
			tmp = list[i];
	return(element - tmp < 0.01 && tmp - element < 0.01);
}

int	is_higher(float *list, float element, int size)
{
	int	i;
	float	tmp;

	tmp = INT_MIN;
	i  = -1;
	while (++i < size)
		if (tmp < list[i])
			tmp = list[i];
	return(element - tmp < 0.01 && tmp - element < 0.01);
}

int	main(void)
{
	clock_t	fd1_a;
	clock_t	fd1_b;
	float	result[4];
	int	i = -1;
	int	j = -1;
	int	ret;
	char	*str;

	printf("\ntime in microseconds:i\n\nnbytes | jgiron    | lmartin   | libc      | cmarin\n");
	while (++j < 1000)
	{
		i = -1;

		str = malloc(j + 1);
		memset(str, 1, j);
		str[j] = 0;
		fd1_a = clock();
		while (++i < TEST_SIZE)
			ft_strcmp(str, str);
		fd1_b = clock();
		printf("%-7d|", j);
		result[0] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
		fd1_a = clock();
		i = -1;
		while (++i < TEST_SIZE)
			ft_strcmp_lmartin(str, str);
		fd1_b = clock();
		result[1] =  1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
		fd1_a = clock();
		i = -1;
		while (++i < TEST_SIZE)
			strcmp(str, str);
		fd1_b = clock();
		result[2] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
		fd1_a = clock();
		i = -1;
		while (++i < TEST_SIZE)
			ft_strcmp_cmarin(str, str);
		fd1_b = clock();
		result[3] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
//		i = -1;
//		while (++i < TEST_SIZE)
//			ft_write_lothieve(1, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", j);
//		fd1_b = clock();
//		result[3] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
//		fd1_a = clock();
		i = -1;
		while (++i < 4)
		{
			if (is_higher(result, result[i], 4))
				printf("\033[0;31m");
			if (is_lower(result, result[i], 4))
				printf("\033[0;32m");
			printf(" %-10f", result[i]);
			printf("\033[0;37m");
		}
		printf("\n");
	}
}
