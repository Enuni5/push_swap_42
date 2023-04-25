/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:22:23 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/25 21:05:18 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

// Check functions

void	ft_check(char **input, int size);
void	ft_is_number(char *num);
void	ft_int_limits(char *num);

// Error and free functions
void	ft_throw_error(void);

// Movement functions

// Order algorithm functions

// Stack functions

int		*ft_populate_stack(char **src, int stack_size, int arg_size);
int		ft_stack_size(char **input, int size);

#endif