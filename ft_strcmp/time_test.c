#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <libc.h>
#include "time_test_config.h"

int	is_min(double *list, double element, int size)
{
	int	i;
	double	tmp;

	tmp = INT_MAX;
	i  = -1;
	while (++i < size)
		if (tmp > list[i])
			tmp = list[i];
	return(element - tmp <= (TOLERANCE * tmp) && tmp - element <= (TOLERANCE * tmp));
}

int	is_max(double *list, double element, int size)
{
	int	i;
	double	tmp;

	tmp = INT_MIN;
	i  = -1;
	while (++i < size)
		if (tmp < list[i])
			tmp = list[i];
	return(element - tmp <= (TOLERANCE * tmp) && tmp - element <= (TOLERANCE * tmp));
}

int	main(void)
{
	clock_t	t1;
	clock_t	t2;
	double	result[NUMBER_OF_FUNCTIONS];
	int	i = -1;
	int	n = -1;
	int	jmax = 30;
	int	k;
	int	number_of_functions = NUMBER_OF_FUNCTIONS;
	char	*str;
	double	score[NUMBER_OF_FUNCTIONS];
	

	printf("\ntest for %s, time in microseconds:\n\n        ", NAME);
	while (++i < NUMBER_OF_FUNCTIONS)
	{
		printf("| %-10s", names[i]);
		score[i] = 0;
	}
	printf("\n");
	while (++n < MAX_VALUE)
	{
		k = -1;
		str = malloc(n + 1);
		memset(str, 1, n);
		str[n] = 0;
		CUSTOM_ARG
		printf("%-8d", n);
		while (++k < number_of_functions)
		{
			i = -1;
			t1 = clock();
			while (++i < TEST_SIZE)
				function[k]ARGS;
			t2 = clock();
			result[k] = 1000000*((float)(t2 - t1) / CLOCKS_PER_SEC) / TEST_SIZE;
		}
		i = -1;
		while (++i < number_of_functions)
		{
			printf("|");
			if (is_max(result, result[i], number_of_functions))
				printf("\033[0;31m");
			if (is_min(result, result[i], number_of_functions))
				printf("\033[0;32m");
			printf(" %-10f", result[i]);
			printf("\033[0;37m");
			score[i] += result[i];
		}
		printf("\n");
	}
	i = -1;
	printf("--------");
	while (++i < NUMBER_OF_FUNCTIONS)
		printf("|-----------");
	printf("\naverage ");
	i = -1;
	while (++i < number_of_functions)
	{
		printf("|");
		if (is_max(score, score[i], number_of_functions))
			printf("\033[0;31m");
		if (is_min(score, score[i], number_of_functions))
			printf("\033[0;32m");
		printf(" %-10f", score[i] / MAX_VALUE);
		printf("\033[0;37m");
	}	
}
