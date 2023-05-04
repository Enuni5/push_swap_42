/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:14:37 by emilionunez       #+#    #+#             */
/*   Updated: 2023/05/04 19:40:47 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Sends the first element to the end of the array
void	ft_rotate(int *stack, int size, char stack_id)
{
	int	aux;
	int	i;

	i = 0;
	aux = stack[0];
	while (i < size && stack[i] != -1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i - 1] = aux;
	if (stack_id == 'a' || stack_id == 'b')
		ft_printf("r%c\n", stack_id);
}

void	ft_rotate_ab(int *stack_a, int *stack_b, int size)
{
	ft_rotate(stack_a, size, ' ');
	ft_rotate(stack_b, size, ' ');
	ft_printf("rr\n");
}

// Brings the last element to the front of the array
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
