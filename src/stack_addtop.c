/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addtop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/11/07 17:49:25 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	stack_addtop(t_stack **stack, t_dlist *node)
{
	if (!node || !stack)
	{
		ft_printf("Error\n");
		return ;
	}
	if ((*stack)->top)
	{
		(*stack)->top->prev = node;
		node->next = (*stack)->top;
		(*stack)->top = node;
	}
	else
	{
		(*stack)->top = node;
		(*stack)->btm = node;
	}
}
