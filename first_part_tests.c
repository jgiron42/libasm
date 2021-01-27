/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_part_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:13:13 by jgiron            #+#    #+#             */
/*   Updated: 2021/01/18 16:28:47 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libasm.h"

int get_sign(int x) {
	return( x == 0 ? 0 : (x > 0 ? 1 : -1));
}

int	 ft_strlen_test()
{
	printf("%d", strlen("") == ft_strlen(""));
	printf("%d\n", (strlen("coucou les copinous") == ft_strlen("coucou les copinous")));
	return(0);
}

int	ft_strcpy_test()
{
	char	*buff1;
	char	*buff2;
	int	ret;

	ret = 0;	
	if (!(buff1 = malloc(1000)) ||
		!(buff2 = malloc(1000)))
		return (-1);	
	printf("%d", strcmp(strcpy(buff1, ""), ft_strcpy(buff2, "")) == 0);
	printf("%d\n", strcmp(strcpy(buff1, "coucou les copinous"), ft_strcpy(buff2, "coucou les copinous")) == 0 );
	free(buff1);
	free(buff2);
	return (ret);
}

int	ft_strcmp_test()
{
	int	ret;

	ret = 0;
	printf("%d", get_sign(strcmp("", "")) == get_sign(ft_strcmp("", "")));
	printf("%d", get_sign(strcmp("a", "")) == get_sign(ft_strcmp("a", "")));
	printf("%d", get_sign(strcmp("sdfs", "")) == get_sign(ft_strcmp("sdfs", "")));
	printf("%d", get_sign(strcmp("qwerty", "r")) == get_sign(ft_strcmp("qwerty", "r")));
	printf("%d", get_sign(strcmp("fffdf", "ddd")) == get_sign(ft_strcmp("fffdf", "ddd")));
	printf("%d", get_sign(strcmp("f", "qwerty"))== get_sign(ft_strcmp("f", "qwerty")));
	printf("%d", get_sign(strcmp("wer", "qwerty")) == get_sign(ft_strcmp("wer", "qwerty")));
	printf("%d", get_sign(strcmp("", "q")) == get_sign(ft_strcmp("", "q")));
	printf("%d", get_sign(strcmp("", "qwerty")) == get_sign(ft_strcmp("", "qwerty")));
	return(ret);
}
