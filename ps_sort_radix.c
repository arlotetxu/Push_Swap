/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_radix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:09 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/27 12:41:08 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
 * SORTING A LIST WITH MORE THAN 5 ARGUMENTS
 */

void	ft_sort_radix(t_node **head_ref_a, t_node **head_ref_b)
{
	int		iter;
	int		i;
	int		nodes;
	t_node	*last;

	iter = ft_max_index_binary(head_ref_a);
	i = -1;
	last = (*head_ref_a);
	while (i++ < iter)
	{
		nodes = ft_num_nodes(*head_ref_a);
		while (nodes-- >= 0)
		{
			last = (*head_ref_a);
			if (((last->index) >> i & 1) == 1)
				ft_rotate_a(head_ref_a, 'a');
			else
				ft_push_b(head_ref_a, head_ref_b);
		}
		while (ft_num_nodes(*head_ref_b) != 0)
			ft_push_a(head_ref_a, head_ref_b);
		ft_push_a(head_ref_a, head_ref_b);
		if (ft_list_sorted(*head_ref_a, ft_list_min(head_ref_a)) == 0)
			break ;
	}
}
