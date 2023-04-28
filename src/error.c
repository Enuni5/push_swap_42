/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilionunez <emilionunez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:31:47 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/28 21:19:29 by emilionunez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_throw_error(void *ptr)
{
	ft_putstr_fd("Error\n", 2);
	if (ptr)
		free(ptr);
	system("leaks push_swap");
	exit(1);
}
