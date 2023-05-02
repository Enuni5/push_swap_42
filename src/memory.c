/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:39:27 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 16:52:28 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Save the initial string even if it's a string or multiple arguments
char	**ft_save_str(char **input, int size)
{
	char	**stack;
	int		i;

	if (size == 1)
	{
		stack = ft_split(input[0], ' ');
		if (stack == NULL)
			return (NULL);
	}
	else
	{
		stack = malloc(sizeof(char *) * size + 1);
		if (stack == NULL)
			return (NULL);
		i = 0;
		while (i < size)
		{
			stack[i] = ft_strdup(input[i]);
			i++;
		}
		stack[size] = NULL;
	}
	return (stack);
}

// Frees the stack matrix memory
void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

// Duplicates a stack, allocating memory and copying the given stack
int	*ft_duplicate_stack(int *stack, int size)
{
	int	*new_stack;
	int	i;

	new_stack = malloc(sizeof(int) * size);
	if (new_stack == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_stack[i] = stack[i];
		i++;
	}
	return (new_stack);
}
