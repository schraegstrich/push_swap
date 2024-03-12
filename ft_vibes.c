/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vibes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:28:22 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/12 16:42:57 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	int 	*stack_a;
	int		*stack_b;
	int 	argv_counter;
	int 	top;

	stack_a = NULL;
	stack_b = NULL;

	argv_counter = 1;
	if (argc > 1)
	{
		top = argc - 2;
		stack_a = malloc((top + 1) * sizeof(int));
		if(!stack_a)
			return(0);
		stack_b = malloc((top + 1) * sizeof(int));
		if(!stack_b)
			return(0);
		while(top >= 0 && argv_counter <= argc - 1)
		{
			printf("this argv is %s\n", argv[argv_counter]);
			if (ft_error(argv[argv_counter]))
			{
				free(stack_a);
				free(stack_b);
				exit(0);
			}
			stack_a[top] = ft_atoi(argv[argv_counter]);
			top--;
			argv_counter++;
		}
		
	}
	//temporary here to check if sub functions work
	printf("stack a before rules is:\n");
	top = argc - 2;
	while(top >= 0)
	{
		printf("%d\n", stack_a[top]);
		top--;
	}
	printf("new stack b is:\n");
	stack_b = push(stack_a, stack_b, "pb"); 
	top = 0;
	while(top >= 0)
	{
		printf("%d\n", stack_b[top]);
		top--;
	}
	printf("new stack a is:\n");
	top = argc - 3;
	while(top >= 0)
	{
		printf("%d\n", stack_a[top]);
		top--;
	}
	return(0);
}