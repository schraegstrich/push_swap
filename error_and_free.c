/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:56 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/15 15:41:05 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//possible errors still not handled:
//question: in my implementation 001 is accepted but -001 and +001 are errors - right?

//free in case of error and say bye
void free_and_exit(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	exit(0);
}

//error based on the whole stack:
//duplication error
int	duplication_error(int *array, int c)
{
	int dup;
	
	dup = -1;
	while (*array)
	{
		if (*array == c)
			dup++;;
		array++;
	}
	if (dup > 0)
	{
		printf("Error\n");
		return(1);
	}
	return(0);

}

//errors based on singular element:
//bigger than int max - double check
//or smaller than int min - double check
//or not an int && handling -0 or +0 or 0 as not an error
//duplicate + or -

int	argument_error(char *str)
{
	if ((ft_atoi(str) == -2147483648 && ft_strcmp(str, "-2147483648")) || //check if it works with all cases
	(ft_atoi(str) == 2147483647 && ft_strcmp(str, "2147483647"))||
	(ft_atoi(str) == 0 && ft_strcmp(str, "-0") && ft_strcmp(str, "+0") && ft_strcmp(str, "0")) ||
	((str[0] == '-' || str[0] == '+') && (!(str[1] >= '1' && str[1] <= '9')))) 
	{
		printf("Error\n");
		return(1);
	}
	return(0);
}