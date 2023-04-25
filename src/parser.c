/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:39:27 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/25 20:45:12 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_is_number(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] == '-')
			i++;
		if (num[i] == 0)
			ft_throw_error();
		while (num[i])
		{
			if (ft_isdigit(num[i]) == 0)
				ft_throw_error();
			i++;
		}
	}
}

void	ft_int_limits(char *num)
{
	long	number;

	number = ft_atoi(num);
	if (number < INT_MIN || number > INT_MAX)
		ft_throw_error();
}

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
				ft_throw_error();
				free(stack);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	ft_check(char **input, int size)
{
	int		i;
	char	**splitted;

	i = 0;
	if (size == 1)
	{
		splitted = ft_split(input[0], ' ');
		while (splitted[i])
		{
			ft_is_number(splitted[i]);
			ft_int_limits(splitted[i]);
			i++;
		}
	}
	else
	{
		while (input[i])
		{
			ft_is_number(input[i]);
			ft_int_limits(input[i]);
			i++;
		}
	}
}
