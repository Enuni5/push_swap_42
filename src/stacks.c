/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:07:50 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 19:54:45 by enunez-n         ###   ########.fr       */
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

// Takes an array and indexes it compared to its 
//sorted version (using bubble sort)
int	*ft_index_array(int *stack, int size)
{
	int	i;
	int	j;
	int	*bubbled_stack;
	int	*index_stack;

	i = -1;
	index_stack = ft_duplicate_stack(stack, size);
	bubbled_stack = ft_sort_array_bubble(stack, size);
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (stack[i] == bubbled_stack[j])
				index_stack[i] = j;
		}
	}
	free(bubbled_stack);
	free(stack);
	return (index_stack);
}

// Print a stack
void	ft_print_stack(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i, stack[i]);
		i++;
	}
}

// Empty the stack, sets values to -1
void	ft_empty_stack(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack[i] = -1;
		i++;
	}
}
