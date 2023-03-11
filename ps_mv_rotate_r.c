//
// Created by Jose Manuel Florido Pereña on 11/3/23.
//
#include "push_swap.h"

void	ft_rotate_r_a(t_node **head_ref_a, char id)
{
	t_node	*last;
	t_node	*node;

	if (*head_ref_a == NULL || (*head_ref_a)->next == NULL)
		return ;
	last = (*head_ref_a);
	node = (*head_ref_a);
	//go through the list till the last node
	while (last->next != NULL)
		last = last->next;






	if (id == 'a')
		write(1, "rra\n", 4);
}
