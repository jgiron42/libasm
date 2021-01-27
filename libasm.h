/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:13:13 by jgiron            #+#    #+#             */
/*   Updated: 2021/01/18 16:28:47 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char * dst, const char * src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s1);

int	ft_strlen_test();
int	ft_strcpy_test();
int	ft_strcmp_test();
int	ft_write_test(char *length);
int	ft_read_test(char *length);
int	ft_strdup_test(char *length);

#endif
