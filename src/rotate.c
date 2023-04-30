/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilionunez <emilionunez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:14:37 by emilionunez       #+#    #+#             */
/*   Updated: 2023/04/30 12:37:42 by emilionunez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(int *stack, int size, char stack_id)
{
	int	aux;

	aux = stack[0];
	ft_moveup(stack, size);
	stack[size - 1] = aux;
	if (stack_id == 'a' || stack_id == 'b')
		ft_printf("r%c\n", stack_id);
}

void	ft_rotate_ab(int *stack_a, int *stack_b, int size)
{
	ft_rotate(stack_a, size, ' ');
	ft_rotate(stack_b, size, ' ');
	ft_printf("rr\n");
}

void	ft_rev_rotate(int *stack, int size, char stack_id)
{
	int	aux;

	aux = stack[size - 1];
	ft_movedown(stack, size);
	stack[0] = aux;
	if (stack_id == 'a' || stack_id == 'b')
		ft_printf("rr%c\n", stack_id);
}

void	ft_rev_rotate_ab(int *stack_a, int *stack_b, int size)
{
	ft_rev_rotate(stack_a, size, ' ');
	ft_rev_rotate(stack_b, size, ' ');
	ft_printf("rrr\n");
}
