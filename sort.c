/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:39:05 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/20 18:59:35 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_median(int *stack_a, int top)
{
	int i;
	int res;

	i = 0;
	res = 0;

	while(i <= top)
	{
		res += stack_a[i];
		i++;
	}
	res /= i;
	printf("res is %d\n", res);
	return(res);
	
}

int *sort_three(int *stack_a)
{
	if ((stack_a[2] > stack_a[1]) && (stack_a[2] > stack_a[0]))
		stack_a = rotate(stack_a, 2, "ra");
	else if ((stack_a[1] > stack_a[2]) && (stack_a[1] > stack_a[0]))
		stack_a = reverse_rotate(stack_a, 2, "rra");
	if (stack_a[2] > stack_a[1])
		stack_a = swap(stack_a, 2, "sa");
	return(stack_a);	
}

//stopped working and gives an infinite amount of "ra" on more than
void sort_more(int *stack_a, int *stack_b, int top)
{
	int	temp;
	int save_top;
	int median;
	
	temp = stack_a[0];
	save_top = top;
	median = find_median(stack_a, top);
	printf("i came here\n");
	while (top >= 0)
	{
		if(stack_a[top] < median)
		{
			stack_b = push(stack_a, stack_b, top, "pb");
			top--;
		}
		else
		{
			stack_a = rotate(stack_a, top, "ra");
			if (stack_a[0] == temp && (top != save_top))
				break ;
		}
	}
	printf("new stack a is:\n");
	while(top >= 0)
	{
		printf("%d\n", stack_a[top]);
		top--;
	}
	printf("new stack b is:\n");
	top = 0;
	while (stack_b[top])
		top++;
	top--;	
	while(top >= 0)
	{
		printf("%d\n", stack_b[top]);
		top--;
	}
}
