/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:09 by jgiron            #+#    #+#             */
/*   Updated: 2020/02/27 18:48:06 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//complete this, then compile the tester with your functions

/************************** name *****************************/
#ifndef NAME
# define NAME "ft_write"
#endif

/************************** define here the number of functions that you want to compare *****************************/
#ifndef NUMBER_OF_FUNCTIONS
# define NUMBER_OF_FUNCTIONS 4
#endif


/************************** define here the tolerance to determine an ex aequo (facultative) *****************************/
#ifndef TOLERANCE
# define TOLERANCE 0
#endif

/************************** define here the number of run you want for each test *****************************/
#ifndef TEST_SIZE
# define TEST_SIZE 10000
#endif

/************************** test for 1 to max_value *****************************/
#ifndef MIN_VALUE
# define MIN_VALUE 0
#endif
#ifndef MAX_VALUE
# define MAX_VALUE 30
#endif

/************************** define a custom arg (facultative) ****************************/
#ifndef CUSTOM_ARG
# define CUSTOM_ARG  
#endif

/************************** define here the arguments you want to send to the function *****************************/
#ifndef ARGS
# define ARGS (1,str,n)
#endif

/************************** declare your functions here *****************************/

ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_write_lothieve(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_write_lmartin(int fildes, const void *buf, size_t nbyte);

/************************** list your functions here *****************************/

ssize_t	(*function[NUMBER_OF_FUNCTIONS])(int fildes, const void *buf, size_t nbyte) = {
	&write,
	&ft_write,
	&ft_write_lothieve,
	&ft_write_lmartin
};

/************************** list the autors here *****************************/
char	*names[NUMBER_OF_FUNCTIONS] = {
	"libc",
	"jgiron",
	"lothieve",
	"lmartin"
};
