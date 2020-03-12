/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:09 by jgiron            #+#    #+#             */
/*   Updated: 2020/03/01 17:58:32 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//complete this, then compile the tester with your functions

/************************** name *****************************/
#ifndef NAME
# define NAME "ft_strdup"
#endif

/************************** define here the number of functions that you want to compare *****************************/
#ifndef NUMBER_OF_FUNCTIONS
# define NUMBER_OF_FUNCTIONS 2
#endif


/************************** define here the tolerance to determine an ex aequo (facultative) *****************************/
#ifndef TOLERANCE
# define TOLERANCE 0
#endif

/************************** define here the number of run you want for each test *****************************/
#ifndef TEST_SIZE
# define TEST_SIZE 1000000
#endif

/************************** test for min_value to max_value *****************************/
#ifndef MIN_VALUE
# define MIN_VALUE 2000
#endif
#ifndef MAX_VALUE
# define MAX_VALUE 2001
#endif

/************************** define a custom arg (facultative) ****************************/
#ifndef CUSTOM_ARG
//example : 
//float a = n % sqrt(n);
# define CUSTOM_ARG  
#endif

/************************** define here the arguments you want to send to the function (n is the itteration, str is a n length null terminated string filled with 1) *****************************/
#ifndef ARGS
# define ARGS (str)
#endif

/************************** declare your functions here *****************************/
char	*ft_strdup(const char *s1);

/************************** list your functions here *****************************/

char	*(*function[NUMBER_OF_FUNCTIONS])(const char *s1) = {
	&strdup,
	&ft_strdup,
};

/************************** list the autors here *****************************/
char	*names[NUMBER_OF_FUNCTIONS] = {
	"libc",
	"jgiron",
};
