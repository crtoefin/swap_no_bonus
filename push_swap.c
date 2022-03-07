/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbelwas <pbelwas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:52:15 by pbelwas           #+#    #+#             */
/*   Updated: 2022/01/05 16:52:15 by pbelwas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**array;
	int		len;
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	argv++;
	argc--;
	a = get_data(argc, argv);
	b = get_stack_b(a);
	if (a->len < 3)
	{
		if (!is_it_sort(a))
		{
			lst_swap(a);
			write(1, "sa\n", 3);
		}
	}
	else
		sorting_three(a, b);
	from_b_to_a(a, b);
	rotate_n(a, position_elem(a, a->min) + 1);
	return (0);
}
