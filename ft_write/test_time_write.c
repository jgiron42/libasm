#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <libc.h>
#ifndef TEST_SIZE
# define TEST_SIZE 100000
#endif

int	ft_write(int fd, char *str, int nbyte);
int	ft_write_lmartin(int fd, char *str, int nbyte);
int	ft_write_lothieve(int fd, char *str, int nbyte);

int	is_lower(float *list, float element, int size)
{
	int	i;
	float	tmp;

	tmp = INT_MAX;
	i  = -1;
	while (++i < size)
		if (tmp > list[i])
			tmp = list[i];
	return(element - tmp < 0.05 && tmp - element < 0.05);
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
	return(element - tmp < 0.05 && tmp - element < 0.05);
}

int	main(void)
{
	clock_t	fd1_a;
	clock_t	fd1_b;
	float	result[4];
	int	i = -1;
	int	j = -2;
	int	ret;

	printf("\n");
	printf("normal:\n");
	ret = ft_write(1, "abcdefghijklmnop", 5);
	printf("\nret = %d\n\nnbyte = 9:\n", ret);
	ret = ft_write(1, "abcdefghijklmnop", 9);
	printf("\nret = %d\n\nbad fd:\n", ret);
	ret = ft_write(1234, "abcdefghijklmnop", 5);
	printf("\nret = %d\n\nbad fd & nbyte = 9:\n", ret);
	ret = ft_write(1, "abcdefghijklmnop", 5);
	printf("\nret = %d\n\nNULL string:\n", ret);
	ret = ft_write(1, NULL, 5);
	printf("\nret = %d\n", ret);
	
	printf("\ntime in microseconds:i\n\nnbytes | jgiron    | lmartin   | libc      | lothieve\n");
	while (++j < 20)
	{
		i = -1;
		fd1_a = clock();
		while (++i < TEST_SIZE)
			ft_write(1, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", j);
		fd1_b = clock();
		printf("%-7d|", j);
		result[0] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
		fd1_a = clock();
		i = -1;
		while (++i < TEST_SIZE)
			ft_write_lmartin(1, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", j);
		fd1_b = clock();
		result[1] =  1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
		fd1_a = clock();
		i = -1;
		while (++i < TEST_SIZE)
			write(1, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", j);
		fd1_b = clock();
		result[2] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
				i = -1;
		while (++i < TEST_SIZE)
			ft_write_lothieve(1, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", j);
		fd1_b = clock();
		result[3] = 1000000*((float)(fd1_b - fd1_a) / CLOCKS_PER_SEC) / TEST_SIZE;
		fd1_a = clock();
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
