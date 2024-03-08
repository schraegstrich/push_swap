/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vibes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:28:22 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/08 18:11:09 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	int 	*stack_a;
	int 	argv_counter;
	int 	top;

	argv_counter = 1;
	if (argc > 1)
	{
		top = argc - 2;
		stack_a = malloc((top + 1) * sizeof(int));
		if(!stack_a)
			return(0);
		while(top >= 0 && argv_counter <= argc - 1)
		{
			stack_a[top] = ft_atoi(argv[argv_counter]);
			top--;
			argv_counter++;
		}
	}
	stack_a = swap_a(stack_a, argc - 2, 0); //temporary here to check if sub functions work
	top = 0;
	while(top <= argc - 2)
	{
		printf("%d ", stack_a[top]);
		top++;
	}
	return(0);
}