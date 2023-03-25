/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_mv_rotate_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:49 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/18 08:33:02 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_r_a(t_node **head_ref_a, char id)
{
	t_node	*last;
	t_node	*node;
	t_node	*go;

	if (*head_ref_a == NULL || (*head_ref_a)->next == NULL)
		return ;
	go = (*head_ref_a);
	node = (*head_ref_a);
	while (go->next->next != NULL)
		go = go->next;
	last = go->next;
	go->next = NULL;
	last->next = node;
	*head_ref_a = last;
	if (id == 'a')
		write(1, "rra\n", 4);
}

void	ft_rotate_r_b(t_node **head_ref_b, char id)
{
	t_node	*last;
	t_node	*node;
	t_node	*go;

	if (*head_ref_b == NULL || (*head_ref_b)->next == NULL)
		return ;
	go = (*head_ref_b);
	node = (*head_ref_b);
	while (go->next->next != NULL)
		go = go->next;
	last = go->next;
	go->next = NULL;
	last->next = node;
	*head_ref_b = last;
	if (id == 'b')
		write(1, "rrb\n", 4);
}

/*
 * 'N' as parameter means the previous functions will not print the movement
 */
void	ft_rotate_r_ab(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_rotate_r_a(head_ref_a, 'N');
	ft_rotate_r_b(head_ref_b, 'N');
	write(1, "rrr\n", 4);
}
