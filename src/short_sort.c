/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:10:28 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 17:43:42 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Sorts an array of 2 elements
void	ft_sort_two(int *stack, int size)
{
	if (size == 2)
		if (stack[0] > stack[1])
			ft_swap(stack, size, 'a');
}

void	ft_sort_three(int *stack, int size)
{
	if (size == 3)
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
}

/* void	ft_sort_four(int *stack, int size)
{
}

void	ft_sort_five(int *stack, int size)
{
} */
