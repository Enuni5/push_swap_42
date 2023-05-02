/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:24:13 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 17:18:08 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks if the string given is a number
void	ft_is_number(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] == '-')
			i++;
		if (num[i] == 0)
			ft_throw_error(NULL);
		while (num[i])
		{
			if (ft_isdigit(num[i]) == 0)
				ft_throw_error(NULL);
			i++;
		}
	}
}

// Checks if the string given is inside an int up/down limit
void	ft_int_limits(char *num)
{
	long	number;

	number = ft_atoi(num);
	if (number < INT_MIN || number > INT_MAX)
		ft_throw_error(NULL);
}

// Checks if there are duplicates in the stack
void	ft_duplicated(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
			{
				ft_throw_error(stack);
				free(stack);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

// Checks if indexed array is ordered
int	ft_check_sort(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack[i] != i)
			return (0);
		i++;
	}
	return (1);
}
