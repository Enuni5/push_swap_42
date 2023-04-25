/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:34:32 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/25 21:13:49 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int		*stack_a;
	char	**input;
	int		stack_size;

	(void)input;
	if (argc > 1)
	{
		argv++;
		ft_check(argv, argc - 1);
		stack_size = ft_stack_size(argv, argc - 1);
		stack_a = ft_populate_stack(argv, stack_size, argc - 1);
	}
	return (0);
}

		/* if (argc == 2)
		{
			while (input[stack_size])
				stack_size++;
			stack_a = ft_fill_stack(stack_a, input, stack_size);
		}
		else
		{
			stack_size = argc - 1;
			stack_a = ft_fill_stack(stack_a, argv, stack_size);
		} */
