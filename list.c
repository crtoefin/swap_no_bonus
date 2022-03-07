/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbelwas <pbelwas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:52:43 by pbelwas           #+#    #+#             */
/*   Updated: 2022/01/05 16:52:46 by pbelwas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_new(int content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		ft_exit_error();
	if (new_elem)
	{
		new_elem->val = content;
		new_elem->next = NULL;
	}
	else
		ft_exit_error();
	return (new_elem);
}

t_list	*lst_add_next(t_list *last_elem, int val)
{
	t_list	*new_elem;

	new_elem = lst_new(val);
	if (last_elem)
		last_elem->next = new_elem;
	return (new_elem);
}

void	lst_add_front(t_list **lst, t_list *new_elem)
{
	new_elem->next = *lst;
	*lst = new_elem;
}

t_list	*lst_n_elem(t_stack *stack, int n)
{
	t_list	*lst;

	lst = stack->begin_stack;
	while (n > 1)
	{
		lst = lst->next;
		n--;
	}
	return (lst);
}
