/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:13:13 by jgiron            #+#    #+#             */
/*   Updated: 2021/01/27 15:20:18 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <errno.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char * dst, const char * src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s1);

void	ft_strlen_test();
void	ft_strcpy_test();
void	ft_strcmp_test();
void	ft_write_test();
void	ft_read_test();
void	ft_strdup_test();

#endif
