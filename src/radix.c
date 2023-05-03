/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:40:56 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/03 16:45:00 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks if a stack is partially sorted with a determined size
int	ft_partial_sorted(int *stack, int partial_size)
{
	int	i;

	i = 0;
	while (i < partial_size - 1)
	{
		if (stack[i + 1] - stack[i] != 1)
			return (0);
		i++;
	}
	return (1);
}

// Iterates the stack_a to find the smaller values bitwise
void	ft_small_to_b(int *stack_a, int *stack_b, int size, int bit)
{
	int	i;
	int	stack_size;

	i = 0;
	stack_size = ft_stack_size(stack_a, size);
	while (i < stack_size)
	{
		if (ft_partial_sorted(stack_a, ft_stack_size(stack_a, size)) == 1)
			break ;
		if ((stack_a[0] >> bit && 1) == 0)
			ft_push(stack_a, stack_b, stack_size, 'b');
		else
			ft_rotate(stack_a, stack_size, 'a');
		i++;
	}
}

// Finds the greater values in stack_b bitwise to send them in order
// to stack_a
void	ft_go_back_to_a(int *stack_a, int *stack_b, int size, int bit)
{
	int	i;
	int	stack_size;
	int	total_bits;

	i = 0;
	stack_size = ft_stack_size(stack_b, size);
	total_bits = ft_count_bits(size);
	while (i < stack_size)
	{
		if (bit < (total_bits - 1))
		{
			if (((stack_b[0] >> (bit + 1)) && 1 == 0))
				ft_rotate(stack_b, stack_size, 'b');
			else
				ft_push(stack_b, stack_a, stack_size, 'a');
		}
		else
			ft_push(stack_b, stack_a, stack_size, 'a');
		i++;
	}
}

// Moves smaller values to stack b by checking their bit value
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
		if (ft_partial_sorted(stack_a, size_of_stack) == 0)
			ft_small_to_b(stack_a, stack_b, size_of_stack, i);
		ft_go_back_to_a(stack_a, stack_b, size_of_stack, i);
		i++;
	}
}
