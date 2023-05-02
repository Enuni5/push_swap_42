/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:31:47 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/02 11:06:41 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Throw the error string and exits the program
void	ft_throw_error(void *ptr)
{
	ft_putstr_fd("Error\n", 2);
	if (ptr)
		free(ptr);
	system("leaks push_swap");
	exit(1);
}
