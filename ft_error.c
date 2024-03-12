/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:56 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/12 17:30:21 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//possible errors:
//duplicates

//maybe make indicator and if it is bigger than 1 then we have a problem
int	*ft_strchr(const int *array, int c)
{
	while (*array)
	{
		if (*array == c)
			return ((int *)array);
		array++;
	}
	return (NULL);
}

int	ft_error(char *str)
{
	//bigger than int max 
	//or smaller than int min
	//or not an int && handling -0 or +0 or 0 as not an error
	
	if ((ft_atoi(str) == -2147483647 && ft_strcmp(str, "-2147483647")) ||
	(ft_atoi(str) == 2147483647 && ft_strcmp(str, "2147483647"))||
	(ft_atoi(str) == 0 && ft_strcmp(str, "-0") && ft_strcmp(str, "+0") && ft_strcmp(str, "0")))
	{
		printf("Error\n");
		return(1);
	}
	return(0);
}