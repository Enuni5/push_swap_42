/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:39:27 by enunez-n          #+#    #+#             */
/*   Updated: 2023/04/14 18:50:32 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*new_stack_node(int number)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->number = number;
	new_node->next = NULL;
	new_node->previous = NULL;
	return (new_node);
}
/* Quiero hacer una función para poblar el stack, pero voy a necesitar
varias funciones auxiliares que ya tengo hechas en libft, pero tendría que
adaptarlas o volver a hacerlas en específico para este ejercicio, lo cual no
me gusta nada, porque debería reutilizar las del libft, así que igualmente
debería adaptarme a lo que ya tengo, que es estandar en lugar de reinventar
la rueda, que creo que me llevará más tiempo */

void	populate_stack(t_stack **stack, int number)
{
	t_stack	*lstptr;
	t_stack	*new_node;

	new_node = new_stack_node(number);
	if (stack)
	{
		if (!*stack)
			*stack = new_node;
		else
		{
			lstptr = ft_lstlast(*stack);
			lstptr->next = new_node;
		}
	}
}

int	check_duplicates(t_stack **stack_a)
{
	int	flag;

	flag = 0;
	while (stack_a)
	{
	}
	return (1);
}
