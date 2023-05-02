/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:10:28 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 19:51:57 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Sorts an array of 2 elements
void	ft_sort_two(int *stack, int size)
{
	if (stack[0] > stack[1])
		ft_swap(stack, size, 'a');
}

void	ft_sort_three(int *stack, int size)
{
	if (stack[0] > stack[1] && stack[0] > stack[2])
		ft_rotate(stack, size, 'a');
	if (stack[0] > stack[1] && stack[0] < stack[2])
		ft_swap(stack, size, 'a');
	if (stack[0] < stack[1] && stack[0] > stack[2])
		ft_rev_rotate(stack, size, 'a');
	if (stack[0] < stack[1] && stack[1] > stack[2])
	{
		ft_rev_rotate(stack, size, 'a');
		ft_swap(stack, size, 'a');
	}
}

/* Search for the "0" value, sends it to stack_b and uses 
ft_sort_three function with the rest, then gets back 
the "0" value to stack_a */
void	ft_sort_four(int *stack, int *stack_b, int size, int position)
{
	int	find_position;

	find_position = 0;
	while (find_position < size)
	{
		if (stack[find_position] == position)
			break ;
		find_position++;
	}
	if (find_position == 2)
	{
		ft_rev_rotate(stack, size, 'a');
		find_position++;
	}
	if (find_position == 3)
		ft_rev_rotate(stack, size, 'a');
	if (find_position == 1)
		ft_swap(stack, size, 'a');
	ft_push(stack, stack_b, size, 'b');
	ft_sort_three(stack, size - 1);
	while (stack_b[0] != -1)
		ft_push(stack_b, stack, size, 'a');
}

void	ft_sort_five(int *stack, int *stack_b, int size)
{
	int	find_position;

	find_position = 0;
	while (find_position < size)
	{
		if (stack[find_position] == 0)
			break ;
		find_position++;
	}
	while (find_position >= 2 && find_position <= 3)
	{
		ft_rev_rotate(stack, size, 'a');
		find_position++;
	}
	if (find_position == 4)
		ft_rev_rotate(stack, size, 'a');
	if (find_position == 1)
		ft_swap(stack, size, 'a');
	ft_push(stack, stack_b, size, 'b');
	ft_sort_four(stack, stack_b, size - 1, 1);
}
