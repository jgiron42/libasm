/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:09 by jgiron            #+#    #+#             */
/*   Updated: 2020/02/28 17:46:30 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//complete this, then compile the tester with your functions

/************************** name *****************************/
#ifndef NAME
# define NAME "ft_strcpy"
#endif

/************************** define here the number of functions that you want to compare *****************************/
#ifndef NUMBER_OF_FUNCTIONS
# define NUMBER_OF_FUNCTIONS 3
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
# define MIN_VALUE 0
#endif
#ifndef MAX_VALUE
# define MAX_VALUE 100 
#endif

/************************** define a custom arg (facultative) ****************************/
#ifndef CUSTOM_ARG
//example : 
//float a = n % sqrt(n);
# define CUSTOM_ARG  
#endif

/************************** define here the arguments you want to send to the function (n is the itteration, str is a n length null terminated string filled with 1) *****************************/
#ifndef ARGS
# define ARGS (buf, str)
#endif

/************************** declare your functions here *****************************/

 char	*ft_strcpy(char * dst, const char * src);
 char	*ft_strcpy_lmartin(char * dst, const char * src);
/************************** list your functions here *****************************/

char	*(*function[NUMBER_OF_FUNCTIONS])(char *dst, const char *src) = {
	&strcpy,
	&ft_strcpy,
	&ft_strcpy_lmartin
};

/************************** list the autors here *****************************/
char	*names[NUMBER_OF_FUNCTIONS] = {
	"libc",
	"jgiron",
	"lmartin"
};
