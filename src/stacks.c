/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:07:50 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/25 21:13:23 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Calculates the stack size if it comes as a string or as many arguments
int	ft_stack_size(char **input, int size)
{
	int		stack_size;
	char	**splitted;

	stack_size = 0;
	if (size == 1)
	{
		splitted = ft_split(input[0], ' ');
		while (splitted[stack_size])
			stack_size++;
	}
	else
		stack_size = size;
	return (stack_size);
}

// Fill the stack from the arguments
int	*ft_populate_stack(char **src, int stack_size, int arg_size)
{
	int		*filled_stack;
	char	**splitted;
	int		i;

	i = 0;
	filled_stack = ft_calloc(sizeof(int), stack_size);
	if (arg_size == 1)
	{
		splitted = ft_split(src[0], ' ');
		while (splitted[i])
		{
			filled_stack[i] = ft_atoi(splitted[i]);
			i++;
		}
	}
	else
	{
		while (i < stack_size)
		{
			filled_stack[i] = (int)ft_atoi(src[i]);
			i++;
		}
	}
	filled_stack[stack_size] = 0;
	return (filled_stack);
}
