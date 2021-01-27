/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:28:45 by jgiron            #+#    #+#             */
/*   Updated: 2020/03/04 15:07:16 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_atoi_base(char *str, char*base);

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}