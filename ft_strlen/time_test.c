/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:34:47 by jgiron            #+#    #+#             */
/*   Updated: 2020/03/01 18:14:22 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	double	result[NUMBER_OF_FUNCTIONS];
	int	i = -1;
	int	n = MIN_VALUE - 1;
	double	score[NUMBER_OF_FUNCTIONS];
	int	k;
	char	*str;

	if (NUMBER_OF_FUNCTIONS < 1 || TEST_SIZE < 1 || MIN_VALUE > MAX_VALUE || TOLERANCE < 0 || TOLERANCE > 1)
		return (-1);
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
		while (++k < NUMBER_OF_FUNCTIONS)
		{
			i = -1;
			result[k]= clock();
			while (++i < TEST_SIZE)
				function[k]ARGS;
			result[k] = 1000000*((float)(clock() - result[k]) / CLOCKS_PER_SEC) / TEST_SIZE;
		}
		i = -1;
		while (++i < NUMBER_OF_FUNCTIONS)
		{
			printf("|");
			if (is_max(result, result[i], NUMBER_OF_FUNCTIONS))
				printf("\033[0;31m");
			else if (is_min(result, result[i], NUMBER_OF_FUNCTIONS))
				printf("\033[0;32m");
			printf(" %-10f\033[0;37m", result[i]);
			score[i] += result[i];
		}
		printf("\n");
		free(str);
	}
	i = -1;
	if (MAX_VALUE <= MIN_VALUE)
		return(0);
	printf("--------");
	while (++i < NUMBER_OF_FUNCTIONS)
		printf("|-----------");
	printf("\naverage ");
	i = -1;
	while (++i < NUMBER_OF_FUNCTIONS)
	{
		printf("|");
		if (is_max(score, score[i], NUMBER_OF_FUNCTIONS))
			printf("\033[0;31m");
		else if (is_min(score, score[i], NUMBER_OF_FUNCTIONS))
			printf("\033[0;32m");
		printf(" %-10f\033[0;37m", (double)(score[i] / MAX_VALUE));
	}	
}
