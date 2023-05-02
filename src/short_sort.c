/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:10:28 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 19:23:44 by enunez-n         ###   ########.fr       */
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
	if (ft_check_sort(stack, size))
	{
		exit(0);
		system("leaks push_swap");
	}
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
void	ft_sort_four(int *stack, int size)
{
	int	find_zero;
	int	*stack_b;

	find_zero = 0;
	while (find_zero < size)
	{
		if (stack[find_zero] == 0)
			break ;
		find_zero++;
	}
	if (find_zero == 2)
	{
		ft_rev_rotate(stack, size, 'a');
		find_zero++;
	}
	if (find_zero == 3)
		ft_rev_rotate(stack, size, 'a');
	if (find_zero == 1)
		ft_swap(stack, size, 'a');
	stack_b = (int *)ft_calloc(size, sizeof(int));
	ft_push(stack, stack_b, size, 'b');
	ft_sort_three(stack, size -1);
	ft_push(stack_b, stack, size, 'a');
	free(stack_b);
}
/*
void	ft_sort_five(int *stack, int size)
{
} */
