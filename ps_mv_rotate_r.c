//
// Created by Jose Manuel Florido Pereña on 11/3/23.
//
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

void	ft_rotate_r_ab(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_rotate_r_a(head_ref_a, 'c');
	ft_rotate_r_b(head_ref_b, 'c');
	write(1, "rrr\n", 4);
}