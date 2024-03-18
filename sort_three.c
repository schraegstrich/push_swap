/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:39:05 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/18 18:25:32 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *sort_three(int *stack_a)
{
	printf(" %d\n%d\n%d\n", stack_a[2], stack_a[1], stack_a[0]);
	if ((stack_a[2] > stack_a[1]) && (stack_a[2] > stack_a[0]))
		stack_a = rotate(stack_a, 2, "ra");
	else if ((stack_a[1] > stack_a[2]) && (stack_a[1] > stack_a[0]))
		stack_a = reverse_rotate(stack_a, 2, "rra");
	if (stack_a[2] > stack_a[1])
		stack_a = swap(stack_a, 2, "sa");
	return(stack_a);	
}