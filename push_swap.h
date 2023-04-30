/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilionunez <emilionunez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:22:23 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/30 12:36:13 by emilionunez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

// Check functions

void	ft_is_number(char *num);
void	ft_int_limits(char *num);
void	ft_duplicated(int *stack, int size);

// Memory functions
char	**ft_save_str(char **input, int size);
void	ft_free_matrix(char **matrix);

// Error and free functions
void	ft_throw_error(void *ptr);

// Movement functions
void	ft_push(int *stack_one, int *stack_two, int size, char stack_id);
void	ft_swap(int *stack, int size, char stack_id);
void	ft_swap_ab(int *stack_a, int *stack_b, int size);
void	ft_moveup(int *stack, int size);
void	ft_movedown(int *stack, int size);
void	ft_rotate_ab(int *stack_a, int *stack_b, int size);
void	ft_rotate(int *stack, int size, char stack_id);
void	ft_rev_rotate(int *stack, int size, char stack_id);
void	ft_rev_rotate_ab(int *stack_a, int *stack_b, int size);

// Order algorithm functions

// Stack functions

int		*ft_populate_stack(char **input, int size);
int		ft_input_size(char **input);

#endif