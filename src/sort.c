/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:15:34 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 17:49:04 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Starts all the sorting machine
int	ft_sort_start(int *stack, int size)
{
	if (size < 6)
		return (ft_short_sort(stack, size));
	return (ft_check_sort(stack, size));
}
	/* else
		ft_long_sort(stack, size); */

int	ft_short_sort(int *stack, int size)
{
	if (size == 2)
		ft_sort_two(stack, size);
	if (size == 3)
		ft_sort_three(stack, size);
	if (ft_check_sort(stack, size))
		return (1);
	return (0);
}
	/* if (size == 4)
		ft_sort_four(stack, size);
	if (size == 5)
		ft_sort_five(stack, size); */

/* void	ft_long_sort(int *stack, int size)
{
} */
