/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilionunez <emilionunez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:03:05 by emilionunez       #+#    #+#             */
/*   Updated: 2023/04/28 23:16:54 by emilionunez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_moveup(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = -1;
}

void	ft_movedown(int *stack, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = -1;
}

// Push from stack one to stack two. Push takes the first element 
//of the stack to the top of the other stack.
void	ft_push(int *stack_one, int *stack_two, int size, char stack_id)
{
	if (stack_two[0] != -1)
		ft_movedown(stack_two, size);
	stack_two[0] = stack_one[0];
	stack_one[0] = -1;
	ft_moveup(stack_one, size);
	if (stack_id == 'a')
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
}
