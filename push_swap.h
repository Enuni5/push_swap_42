/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:22:23 by enunez-n          #+#    #+#             */
/*   Updated: 2023/05/04 18:46:43 by enunez-n         ###   ########.fr       */
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
int		ft_check_sort(int *stack, int size);

// Memory, free and error functions
char	**ft_save_str(char **input, int size);
void	ft_free_matrix(char **matrix);
int		*ft_duplicate_stack(int *stack, int size);
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
int		ft_sort_start(int *stack, int size);
int		ft_short_sort(int *stack_a, int *stack_b, int size);
void	ft_sort_two(int *stack, int size);
void	ft_sort_three(int *stack, int size);
void	ft_sort_four(int *stack_a, int *stack_b, int size, int position);
void	ft_sort_five(int *stack_a, int *stack_b, int size);

// Radix
void	ft_radix(int *stack_a, int *stack_b, int size);
int		ft_count_bits(int size);
int		ft_partial_sorted(int *stack, int partial_size);

// Stack functions

int		*ft_populate_stack(char **input, int size);
int		ft_input_size(char **input);
int		*ft_index_array(int *stack, int size);
void	ft_print_stack(int *stack, int size);
void	ft_empty_stack(int *stack, int size);
int		ft_stack_size(int *stack, int size);

// Bubble sort functions
int		*ft_sort_array_bubble(int *stack, int size);
void	swap_bubble(int *stack_x, int *stack_y);

#endif