/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:56 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/18 18:48:46 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//possible errors still not handled:
//dafuq it works with 1.5 and , and dafuq and signs after number
//to fix: when argv is a string with multiple numbers only the first one is read

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
//smaller than int min or bigger than int max
//not an int
// zeros before number for no reason 
//duplicate + or -

int	argument_error(char *str)
{
	if ((ft_atoi(str) < 0 && str[0] != '-') || (ft_atoi(str) > 0 && str[0] == '-')||
	(ft_atoi(str) == 0 && str[0] != '0') ||
	(str[0] == '0' && ft_atoi(str) != 0) ||
	((str[0] == '-' || str[0] == '+') && (!(str[1] >= '1' && str[1] <= '9'))))
	{
		printf("Error\n");
		return(1);
	}
	return(0);
}

int is_sorted(int *stack_a, int top)
{
	int temp;
	
	if (top == 0)
		return (1);
	temp = stack_a[top];

	while(top >= 1)
	{
		if (temp < stack_a[top - 1]) 
			temp = stack_a[top - 1];
		else
			break ;
		top--;
	}
	if (temp == stack_a[0])
		return (1);
	return(0);
}