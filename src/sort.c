/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:15:34 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/03 18:17:37 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Starts all the sorting machine, it previously checks if the stack is ordered
void	ft_sort_start(int *stack, int size)
{
	int	*stack_b;

	if (ft_check_sort(stack, size))
		exit(0);
	stack_b = (int *)ft_calloc(size, sizeof(int));
	ft_empty_stack(stack_b, size);
	if (size < 6)
	{
		ft_short_sort(stack, stack_b, size);
		free(stack_b);
	}
	else
	{
		ft_radix(stack, stack_b, size);
		free(stack_b);
	}
}

// Calls sort functions depending on size, checks if stack is sorted 
// before and after calling
int	ft_short_sort(int *stack_a, int *stack_b, int size)
{
	if (size == 2)
		ft_sort_two(stack_a, size);
	if (size == 3)
		ft_sort_three(stack_a, size);
	if (size == 4)
		ft_sort_four(stack_a, stack_b, size, 0);
	if (size == 5)
		ft_sort_five(stack_a, stack_b, size);
	if (ft_check_sort(stack_a, size))
		return (1);
	return (0);
}
