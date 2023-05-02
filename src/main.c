/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:34:32 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 11:04:53 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int		*stack_a;
	char	**input;
	int		stack_size;

	if (argc > 1)
	{
		argv++;
		input = ft_save_str(argv, argc - 1);
		if (input == NULL)
			return (0);
		stack_size = ft_input_size(input);
		stack_a = ft_populate_stack(input, stack_size);
		ft_free_matrix(input);
		free(stack_a);
		system("leaks push_swap");
	}
	return (0);
}
