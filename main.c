/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:13:13 by jgiron            #+#    #+#             */
/*   Updated: 2021/01/18 16:28:47 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libasm.h"

void	print_result(int result, int length)
{
	while (--length >= 0)
		printf("%d", (result >> length) & 1);
	printf("\n");
}

int	main(void)
{
	ft_strlen_test();
	ft_strcpy_test();
	ft_strcmp_test();
}
