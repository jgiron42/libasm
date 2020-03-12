/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:09 by jgiron            #+#    #+#             */
/*   Updated: 2020/02/27 18:16:36 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//complete this, then compile the tester with your functions

/************************** name *****************************/
#ifndef NAME
# define NAME "ft_strcmp"
#endif

/************************** define here the number of functions that you want to compare *****************************/
#ifndef NUMBER_OF_FUNCTIONS
# define NUMBER_OF_FUNCTIONS 4
#endif


/************************** define here the tolerance to determine an ex aequo (facultative) *****************************/
#ifndef TOLERANCE
# define TOLERANCE 0.05
#endif

/************************** define here the number of run you want for each test *****************************/
#ifndef TEST_SIZE
# define TEST_SIZE 1000000
#endif

/************************** test for 1 to max_value *****************************/
#ifndef MAX_VALUE
# define MAX_VALUE 100 
#endif

/************************** define a custom arg (facultative) ****************************/
#ifndef CUSTOM_ARG
# define CUSTOM_ARG  
#endif

/************************** define here the arguments you want to send to the function *****************************/
#ifndef ARGS
# define ARGS (str,str)
#endif

/************************** declare your functions here *****************************/

int     ft_strcmp(const char *s1, const char *s2);
int     ft_strcmp_lothieve(const char *s1, const char *s2);
int     ft_strcmp_lmartin(const char *s1, const char *s2);

/************************** list your functions here *****************************/

int	(*function[NUMBER_OF_FUNCTIONS])(const char *s1, const char *s2) = {
	&strcmp,
	&ft_strcmp,
	&ft_strcmp_lothieve,
	&ft_strcmp_lmartin
};

/************************** list the autors here *****************************/
char	*names[NUMBER_OF_FUNCTIONS] = {
	"libc",
	"jgiron",
	"lothieve",
	"lmartin"
};
