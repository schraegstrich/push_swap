/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:27:45 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/08 18:09:01 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// to use sa or sb, call the right function and pass 0 as int ss
// to use ss, call both functions and pass 1 as int ss in both
// this is to make sure the right command name will be printed after use
int	*swap_a(int *stack_a, int top, int ss)
{
	int temp;
	
	if (!stack_a|| top == 0)
		exit(0);
	temp = stack_a[top]; // temp is 1
	stack_a[top] = stack_a[top - 1]; // top is 2
	stack_a[top - 1] = temp; // top -1 is 1
	if(ss == 0)
		printf("sa\n");
	/*int i;
	i = 0;
	while(i <= top)
	{
		printf("%d ", stack_a[i]);
		i++;
	}*/
	return(stack_a);
}

int	*swap_b(int *stack_b, int top, int ss)
{
	int temp;
	
	if (!stack_b|| top == 0)
		exit(0);
	temp = stack_b[top]; // temp is 1
	stack_b[top] = stack_b[top - 1]; // top is 2
	stack_b[top - 1] = temp; // top -1 is 1
	if(ss == 0)
		printf("sb\n");
	else
		printf("ss\n");
	/*int i;
	i = 0;
	while(i <= top)
	{
		printf("%d ", stack_b[i]);
		i++;
	}*/
	return(stack_b);
}