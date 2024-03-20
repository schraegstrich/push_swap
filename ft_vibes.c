/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vibes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:28:22 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/20 18:46:52 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//to fix: when argv is a string with multiple numbers only the first one is read
int	main (int argc, char **argv)
{
	int 	*stack_a;
	int		*stack_b;
	int 	argv_counter;
	int 	top;

	stack_a = NULL;
	stack_b = NULL;
	top = 0;

	argv_counter = 1;
	if (argc > 1)
	{
		top = argc - 2;	
		//idea - exit here if top is 0 and argv1 is not a string with spaces
		stack_a = malloc((top + 1) * sizeof(int));
		if(!stack_a)
			return(0);
		stack_b = malloc((top + 1) * sizeof(int));
		if(!stack_b)
			return(0);
		while(top >= 0 && argv_counter <= argc - 1)
		{
			if (argument_error(argv[argv_counter]))
				free_and_exit(stack_a, stack_b);
			stack_a[top] = ft_atoi(argv[argv_counter]);
			top--;
			argv_counter++;
		}
		while (top <= argc - 2)
		{
			if (duplication_error(stack_a, stack_a[top]))
				free_and_exit(stack_a, stack_b);
			top++;
		}
		top--;
		if (is_sorted(stack_a, top))
			free_and_exit(stack_a, stack_b);
		if (top == 1)
		{
			swap(stack_a, top, "sa");
			free_and_exit(stack_a, stack_b);
		}
		if (top == 2)
		{
			sort_three(stack_a);
			free_and_exit(stack_a, stack_b);
		}
		if (top > 2)
		{
			printf("i am here bruh\n");
			sort_more(stack_a, stack_b, top);

		}
	}
	
	//temporary here to check if operations work
	/*printf("stack a before rules is:\n");
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
	}*/
	//printf("not supposed to happen");
	return(0);
}