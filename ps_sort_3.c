//
// Created by Jose Manuel Florido Perena on 3/17/23.
//

#include "push_swap.h"

int	ft_list_min(t_node **head_ref_a)
{
	int		min;
	t_node	*last;

	min = (*head_ref_a)->nb;
	last = (*head_ref_a);
	while (last->next != NULL)
	{
		if (last->nb < min)
			min = last->nb;
		last = last->next;
	}
	if (last->nb < min)
		min = last->nb;
	printf("El valor minimo de la lista es: %d\n", min);
	return (min);
}

void	ft_sort_2(t_node **head_ref_a)
{
	if (ft_list_sorted(*head_ref_a) == 0)
		return ;
	ft_swap_a(head_ref_a, 'a');
}


void	ft_sort_3(t_node **head_ref_a)
{
//	if (ft_list_sorted(*head_ref_a) == 0)
//		return ;

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

void	ft_sort_5(t_node **head_ref_a, t_node **head_ref_b)
{
	int		min;
	int		i;

	i = 0;
	while (i < 2)
	{
		min = ft_list_min(head_ref_a);
		while ((*head_ref_a)->nb != min)
			ft_rotate_a(head_ref_a, 'a');
		ft_push_b(head_ref_a, head_ref_b);
		i++;
	}
	//ft_swap_b(head_ref_b, 'b');
	ft_sort_3(head_ref_a);
//	i = 0;
//	while (i++ < 2)
//		ft_push_a(head_ref_a, head_ref_b);
	printf("List_A\n");
	ft_print_list(*head_ref_a);
//	printf("List_B\n");
//	ft_print_list(*head_ref_b);
}