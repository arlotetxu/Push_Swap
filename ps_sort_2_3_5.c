/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_2_3_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:30:01 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/27 11:30:07 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * GETTING THE MINIMUM INDEX IN A LIST
 * We will use this return to check if the list is sorted
 * thanks to the function
 * int	ft_list_sorted(t_node *head_ref, int min_index)
 * where min_index is the return of the current function
 */
int	ft_list_min(t_node **head_ref_a)
{
	int		min;
	t_node	*last;

	min = (*head_ref_a)->index;
	last = (*head_ref_a);
	while (last->next != NULL)
	{
		if (last->index < min)
			min = last->index;
		last = last->next;
	}
	if (last->index < min)
		min = last->index;
	return (min);
}

/*
 * SORTING A LIST WITH 2 NODES
 */
void	ft_sort_2(t_node **head_ref_a)
{
	ft_swap_a(head_ref_a, 'a');
}

/*
 * SORTING A LIST WITH 3 NODES
 */
void	ft_sort_3(t_node **head_ref_a)
{
	if (ft_list_sorted(*head_ref_a, ft_list_min(head_ref_a)) == 0)
		return ;
	if ((*head_ref_a)->nb > (*head_ref_a)->next->nb)
	{
		if ((*head_ref_a)->next->nb > (*head_ref_a)->next ->next->nb)
		{
			ft_swap_a(head_ref_a, 'a');
			ft_rotate_r_a(head_ref_a, 'a');
		}
		else
		{
			ft_rotate_a(head_ref_a, 'a');
			ft_sort_3(head_ref_a);
		}
	}
	else
	{
		ft_swap_a(head_ref_a, 'a');
		ft_sort_3(head_ref_a);
	}
}

/*
 * SORTING A LIST WITH 5 NODES
 */
void	ft_sort_5(t_node **head_ref_a, t_node **head_ref_b)
{
	int		min;
	int		i;

	i = 0;
	while (i++ < 2)
	{
		min = ft_list_min(head_ref_a);
		while ((*head_ref_a)->index != min)
			ft_rotate_a(head_ref_a, 'a');
		ft_push_b(head_ref_a, head_ref_b);
	}
	ft_sort_3(head_ref_a);
	i = 0;
	while (i++ < 2)
		ft_push_a(head_ref_a, head_ref_b);
}
