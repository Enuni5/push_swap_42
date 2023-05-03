/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:40:56 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/03 13:33:15 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Count the bits of the maximum number in the stack.
int	ft_count_bits(int size)
{
	int	count;

	count = 0;
	while (size > 0)
	{
		count++;
		size = size / 2;
	}
	return (count);
}

int	ft_stack_size(int *stack, int size)
{
	int	i;

	i = 0;
	while (stack[i] != -1 && i < size)
		i++;
	return (i);
}

int	ft_sorted(int *stack, int size)
{
	int	i;

	i = 0;
}

void	ft_radix(int *stack_a, int *stack_b, int size)
{
	int	total_bits;
	int	size_of_stack;
	int	i;

	total_bits = ft_count_bits(size);
	i = 0;
	while (i < total_bits)
	{
		size_of_stack = ft_stack_size(stack_a, size);
		if ()
	}
}
