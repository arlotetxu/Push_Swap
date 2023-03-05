//
// Created by Jose Manuel Florido Pereña on 3/3/23.
//
#include "push_swap.h"

void	ft_swap_a(t_node **head_ref_a)
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
	//ft_print_list(*head_ref_a);
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_node **head_ref_b)
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
	//ft_print_list(*head_ref_a);
	write(1, "sb\n", 3);
}

void	ft_swap_a_b(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*first_a;
	t_node	*second_a;
	t_node	*first_b;
	t_node	*second_b;

	//checking if the list a & b exist and have more than 2 nodes
	if (head_ref_a == NULL || (*head_ref_a)->next == NULL ||
			head_ref_b == NULL || (*head_ref_b)->next == NULL)
		return;
	//swaping a list
	first_a = *head_ref_a;
	second_a = (*head_ref_a)->next;
	first_a->next = second_a->next;
	second_a->next = first_a;
	*head_ref_a = second_a;
	//swapping b list
	first_b = *head_ref_b;
	second_b = (*head_ref_b)->next;
	first_b->next = second_b->next;
	second_b->next = first_b;
	*head_ref_b = second_b;
	//ft_print_list(*head_ref_a);
	write(1, "ss\n", 3);
}
