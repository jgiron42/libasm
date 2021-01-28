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
	int ret1;
	int ret2;

	printf("====== ft_strcmp: ======\n");
	
	ret1 = get_sign(strcmp("", ""));
	ret2 = get_sign(ft_strcmp("", ""));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("a", ""));
	ret2 = get_sign(ft_strcmp("a", ""));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("sdfs", ""));
	ret2 = get_sign(ft_strcmp("sdfs", ""));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("qwerty", "r"));
	ret2 = get_sign(ft_strcmp("qwerty", "r"));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("qwerty", "qwe"));
	ret2 = get_sign(ft_strcmp("qwerty", "qwe"));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("f", "qwerty"));
	ret2 = get_sign(ft_strcmp("f", "qwerty"));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("wer", "qwerty"));
	ret2 = get_sign(ft_strcmp("wer", "qwerty"));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("", "q"));
	ret2 = get_sign(ft_strcmp("", "q"));
	printf("%s", ret1 == ret2 ? "✅" : "❌");
	ret1 = get_sign(strcmp("", "qwerty"));
	ret2 = get_sign(ft_strcmp("", "qwerty"));
	printf("%s\n", ret1 == ret2 ? "✅" : "❌");
}
