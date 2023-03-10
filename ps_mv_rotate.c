//
// Created by Jose Manuel Florido Pereña on 10/3/23.
//
#include "push_swap.h"

void	ft_rotate_a(t_node **head_ref_a)
{
	t_node	*node;
	t_node	*last;

	//Checking if the list exists and has more than one node
	if (*head_ref_a == NULL || (*head_ref_a)->next == NULL)
		return ;
	node = (*head_ref_a);
	last = (*head_ref_a);
	(*head_ref_a) = (*head_ref_a)->next;
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	node->next = NULL;
	//write(1, "ra\n", 3);
	ft_print_rotate();
}

void	ft_rotate_b(t_node **head_ref_b)
{
	t_node	*node;
	t_node	*last;

	//Checking if the list exists and has more than one node
	if (*head_ref_b == NULL || (*head_ref_b)->next == NULL)
		return ;
	node = (*head_ref_b);
	last = (*head_ref_b);
	(*head_ref_b) = (*head_ref_b)->next;
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	node->next = NULL;
	//write(1, "rb\n", 3);
	ft_print_rotate();
}

void	ft_rotate_ab(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_rotate_a(head_ref_a);
	ft_rotate_b(head_ref_b);
	ft_print_rotate();
}

void	ft_print_rotate()
{
//	const char	*func;
//
//	func = __func__ ;
	printf("la funcion %s Invoca: %s\n", __func__, __FUNCTION__);
//	if (func == "ft_rotate_a")
//		write(1, "ra\n", 3);
//	if (func == "ft_rotate_b")
//		write(1, "rb\n", 3);
//	if (func == "ft_rotate_ab")
//		write(1, "rr\n", 3);
}