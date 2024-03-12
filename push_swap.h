/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:51:08 by lkirillo          #+#    #+#             */
/*   Updated: 2024/03/12 16:04:47 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdio.h>
//to do: comment out stdio.h after checking
# include <stdlib.h>

int	ft_error(char *str);
int	*swap(int *stack, int top, char *op_print);
int	*rotate(int *stack, int top, char *op_print);
int	*reverse_rotate(int *stack, int top, char *op_print);
int	*push(int *src, int *dst, char *op_print);
#endif
