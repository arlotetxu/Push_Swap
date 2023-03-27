/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_mv_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:43:04 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/27 11:29:41 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_node **head_ref_a, char id)
{
	t_node	*node;
	t_node	*last;

	if (*head_ref_a == NULL || (*head_ref_a)->next == NULL)
		return ;
	node = (*head_ref_a);
	last = (*head_ref_a);
	(*head_ref_a) = (*head_ref_a)->next;
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	node->next = NULL;
	if (id == 'a')
		write(1, "ra\n", 3);
}

void	ft_rotate_b(t_node **head_ref_b, char id)
{
	t_node	*node;
	t_node	*last;

	if (*head_ref_b == NULL || (*head_ref_b)->next == NULL)
		return ;
	node = (*head_ref_b);
	last = (*head_ref_b);
	(*head_ref_b) = (*head_ref_b)->next;
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	node->next = NULL;
	if (id == 'b')
		write(1, "rb\n", 3);
}

/*
 * 'N' as parameter means the previous functions will not print the movement
 */
void	ft_rotate_ab(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_rotate_a(head_ref_a, 'N');
	ft_rotate_b(head_ref_b, 'N');
	write(1, "rr\n", 3);
}
