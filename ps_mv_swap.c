//
// Created by Jose Manuel Florido Pereña on 3/3/23.
//
#include "push_swap.h"

void	ft_swap_a(t_node **head_ref_a, char id)
{
	t_node	*first;
	t_node	*second;

	//checking if the list exists and has more than 2 nodes
	if (head_ref_a == NULL || (*head_ref_a)->next == NULL)
		return;
	first = *head_ref_a;
	second = (*head_ref_a)->next;
	first->next = second->next;
	second->next = first;
	*head_ref_a = second;
	if (id == 'a')
		write(1, "sa\n", 3);
}

void	ft_swap_b(t_node **head_ref_b, char id)
{
	t_node	*first;
	t_node	*second;

	//checking if the list exists and has more than 2 nodes
	if (head_ref_b == NULL || (*head_ref_b)->next == NULL)
		return;
	first = *head_ref_b;
	second = (*head_ref_b)->next;
	first->next = second->next;
	second->next = first;
	*head_ref_b = second;
	if (id == 'b')
		write(1, "sb\n", 3);
}

void	ft_swap_ab(t_node **head_ref_a, t_node **head_ref_b)
{
	//'N' as parameter means the previous functions will not print the movement
	ft_swap_a(head_ref_a, 'N');
	ft_swap_b(head_ref_b, 'N');
	write(1, "ss\n", 3);
}
