/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilionunez <emilionunez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:39:27 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/28 21:18:15 by emilionunez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Save the initial str even if it's a string or multiple arguments
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
