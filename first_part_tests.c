/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_part_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:13:13 by jgiron            #+#    #+#             */
/*   Updated: 2021/01/27 15:36:30 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libasm.h"

int get_sign(int x) {
	return( x == 0 ? 0 : (x > 0 ? 1 : -1));
}

void	 ft_strlen_test()
{
	printf("====== ft_strlen: ======\n");
	printf("%s", strlen("") == ft_strlen("") ? "✅" : "❌");
	printf("%s\n", (strlen("coucou les copinous") == ft_strlen("coucou les copinous")) ? "✅" : "❌");
}

void	ft_strcpy_test()
{
	char	*buff1;
	char	*buff2;
	if (!(buff1 = malloc(1000)) ||
		!(buff2 = malloc(1000)))
		return;
	printf("====== ft_strcpy: ======\n");
	printf("%s", strcmp(strcpy(buff1, ""), ft_strcpy(buff2, "")) == 0 ? "✅" : "❌");
	printf("%s\n", strcmp(strcpy(buff1, "coucou les copinous"), ft_strcpy(buff2, "coucou les copinous")) == 0  ? "✅" : "❌");
	free(buff1);
	free(buff2);
}

void	ft_strcmp_test()
{
	printf("====== ft_strcmp: ======\n");
	printf("%s", get_sign(strcmp("", "")) == get_sign(ft_strcmp("", "")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("a", "")) == get_sign(ft_strcmp("a", "")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("sdfs", "")) == get_sign(ft_strcmp("sdfs", "")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("qwerty", "r")) == get_sign(ft_strcmp("qwerty", "r")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("fffdf", "ddd")) == get_sign(ft_strcmp("fffdf", "ddd")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("f", "qwerty"))== get_sign(ft_strcmp("f", "qwerty")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("wer", "qwerty")) == get_sign(ft_strcmp("wer", "qwerty")) ? "✅" : "❌");
	printf("%s", get_sign(strcmp("", "q")) == get_sign(ft_strcmp("", "q")) ? "✅" : "❌");
	printf("%s\n", get_sign(strcmp("", "qwerty")) == get_sign(ft_strcmp("", "qwerty")) ? "✅" : "❌");
}
