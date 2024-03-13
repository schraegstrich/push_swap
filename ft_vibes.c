/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vibes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:28:22 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/13 17:17:31 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		top--;
	}
	if (temp == stack_a[0])
		return (1);
	return(0);
}

//maybe create stack b here and not in main???
int	*sort_stack(int *stack_a, int *stack_b, int top)
{
	if(is_sorted(stack_a, top))
	{
		printf("I am sorted bruh\n"); // temporary checker
		free_and_exit(stack_a, stack_b);
	}
	return(stack_a);
}

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
	}
	stack_a = sort_stack(stack_a, stack_b, top);
	//temporary here to check if operations work
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