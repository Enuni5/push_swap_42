/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilionunez <emilionunez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:54:08 by emilionunez       #+#    #+#             */
/*   Updated: 2023/04/28 23:14:13 by emilionunez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *stack, int size, char stack_id)
{
	int	aux;

	if (size > 1)
	{
		aux = stack[0];
		stack[0] = stack[1];
		stack[1] = aux;
		if (stack_id == 'a' || stack_id == 'b')
			ft_printf("s%c\n", stack_id);
	}
}

void	ft_swap_ab(int *stack_a, int *stack_b, int size)
{
	ft_swap(stack_a, size, ' ');
	ft_swap(stack_b, size, ' ');
	ft_printf("ss\n");
}
