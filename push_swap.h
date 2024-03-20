/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:51:08 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/20 19:00:04 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdio.h>
//to do: comment out stdio.h after checking
# include <stdlib.h>
//error handling
int	argument_error(char *str);
int	duplication_error (int *array, int c);
int is_sorted(int *stack_a, int top);
void free_and_exit(int *stack_a, int *stack_b);
//operations
int	*swap(int *stack, int top, char *op_print);
int	*rotate(int *stack, int top, char *op_print);
int	*reverse_rotate(int *stack, int top, char *op_print);
int	*push(int *src, int *dst, int top, char *op_print);
//algorithm
int *sort_three(int *stack_a);
void sort_more(int *stack_a, int *stack_b, int top);

#endif
