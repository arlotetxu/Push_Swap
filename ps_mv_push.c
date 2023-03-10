//
// Created by Jose Manuel Florido Pereña on 10/3/23.
//

#include "push_swap.h"

void	ft_push_b(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*node;

	if (*head_ref_a == NULL)
		return ;
	node = (*head_ref_a);
	(*head_ref_a) = (*head_ref_a)->next;
	node->next = (*head_ref_b);
	(*head_ref_b) = node;
	write(1, "pb\n", 3);
}

void	ft_push_a(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*node;

	if (*head_ref_b == NULL)
		return ;
	node = (*head_ref_b);
	(*head_ref_b) = (*head_ref_b)->next;
	node->next = (*head_ref_a);
	(*head_ref_a) = node;
	write(1, "pa\n", 3);
}