/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:24:13 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/27 13:05:58 by enunez-n         ###   ########.fr       */
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
void	ft_int_limits(int num)
{
	if (num < INT_MIN || num > INT_MAX)
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
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

// Starts the check process, if error, returns -1
int	ft_check(char **input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		ft_is_number(input[i]);
		//ft_int_limits(input[i]);
		ft_printf("%s ", input[i]);
		i++;
	}
	return (0);
}

/*
Estaría bien que la función que va a ir guardando los números 
compruebe que el str de donde viene sea un número,
que esté dentro de los límites y que no esté duplicado con los anteriores 
números guardados y después ya lo guarda en el stack. 
Todo con funciones aisladas.
*/
