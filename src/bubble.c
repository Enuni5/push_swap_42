/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:24:31 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 15:57:28 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_bubble(int *stack_x, int *stack_y)
{
	int	temp;

	temp = *stack_x;
	*stack_x = *stack_y;
	*stack_y = temp;
}

int	*ft_sort_array_bubble(int *stack, int size)
{
	int	i;
	int	j;
	int	swapped;
	int	*ordered;

	i = 0;
	ordered = ft_duplicate_stack(stack, size);
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (ordered[j] > ordered[j + 1])
			{
				swap_bubble(&ordered[j], &ordered[j + 1]);
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break ;
		i++;
	}
	return (ordered);
}
