/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:13:27 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/03 16:15:10 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks the actual stack size (maybe some values has been moved)
int	ft_stack_size(int *stack, int size)
{
	int	i;

	i = 0;
	while (stack[i] != -1 && i < size)
		i++;
	return (i);
}

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
