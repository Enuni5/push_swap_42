/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:07:50 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 11:07:09 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Fill the stack from the arguments as integers
int	*ft_populate_stack(char **input, int size)
{
	int	*stack;
	int	i;

	i = 0;
	stack = malloc(sizeof(int) * size);
	if (stack == NULL)
		ft_throw_error(NULL);
	while (i < size && input[i])
	{
		ft_is_number(input[i]);
		ft_int_limits(input[i]);
		stack[i] = (int)ft_atoi(input[i]);
		i++;
	}
	ft_duplicated(stack, size);
	return (stack);
}

// Measures length of given arguments
int	ft_input_size(char **input)
{
	int	stack_size;

	stack_size = 0;
	while (input[stack_size])
		stack_size++;
	return (stack_size);
}
