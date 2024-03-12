/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:31:53 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/12 15:12:54 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa, sb, ss
int	*swap(int *stack, int top, char *op_print) 
{
	int temp;
	
	if (!stack|| top == 0)
		exit(0);
	temp = stack[top];
	stack[top] = stack[top - 1]; 
	stack[top - 1] = temp; 
	if(op_print)
		printf("%s\n", op_print);
	return(stack);
} 
//pa, pb
//question: how to keep the top value up to date in the "main" function?
//decrement top-- in the main file every time this function is called? better solution?
int	*push(int *src, int *dst, char *op_print)
{
	int	top_src;
	int	i;
	
	if(!src)
		exit(0);
	top_src = 0;
	while (src[top_src])
		top_src++;
	top_src--;
	i = 0;
	while(dst[i])
		i++;
	dst[i] = src[top_src];
	printf("%s\n", op_print);
	return(dst);
}
//ra, rb, rr
int	*rotate(int *stack, int top, char *op_print)
{
	int temp;
		
	if (!stack|| top == 0)
		exit(0);
	temp = stack[top];
	while (top >= 0)
	{
		stack[top] = stack[top - 1];
		top--;
	}
	stack[0] = temp;
	if(op_print)
		printf("%s\n", op_print);
	return(stack); 
}
//rra, rrb, rrr
int	*reverse_rotate(int *stack, int top, char *op_print)
{
	int temp;
	int i;
		
	if (!stack|| top == 0)
		exit(0);
	temp = stack[0];
	i = 0;
	while (i <= top)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[top] = temp;
	if(op_print)
		printf("%s\n", op_print);
	return(stack); 
}