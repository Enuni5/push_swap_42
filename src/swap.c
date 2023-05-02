/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:54:08 by emilionunez       #+#    #+#             */
/*   Updated: 2023/05/02 11:06:15 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Changes the position of the 2 first elements of the array
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
