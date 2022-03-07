/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbelwas <pbelwas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:51:44 by pbelwas           #+#    #+#             */
/*   Updated: 2022/01/05 18:07:08 by pbelwas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_it_sort(t_stack *a)
{
	t_list	*lst;

	lst = a->begin_stack;
	while (lst && lst->next)
	{
		if (lst->val > lst->next->val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	redefine_stack(t_stack *stack)
{
	if ((stack->begin_stack)->val < stack->min)
		stack->min = (stack->begin_stack)->val;
	if ((stack->begin_stack)->val > stack->max)
		stack->max = (stack->begin_stack)->val;
}

int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}
