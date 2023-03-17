//
// Created by Jose Manuel Florido Perena on 3/17/23.
//

#include "push_swap.h"

//int	ft_list_max(t_node **head_ref_a)
//{
//	int		max;
//	t_node	*last;
//
//	max = 0;
//	last = (*head_ref_a);
//	while (last->next != NULL)
//	{
//		if (last->nb > max)
//			max = last->nb;
//		last = last->next;
//	}
//	if (last->nb > max)
//		max = last->nb;
//	printf("El valor maximo de la lista es: %d\n", max);
//	return (max);
//}


void	ft_sort_3(t_node **head_ref_a)
{
	if (ft_list_sorted(*head_ref_a) == 0)
		return;
	if ((*head_ref_a)->nb > (*head_ref_a)->next->nb)
	{
		if ((*head_ref_a)->next->nb > (*head_ref_a)->next ->next->nb)
		{
			ft_swap_a(head_ref_a, 'a');
			ft_rotate_r_a(head_ref_a, 'a');
		}
		else
			ft_rotate_a(head_ref_a, 'a');
	}
	else
	{
		ft_swap_a(head_ref_a, 'a');
		ft_sort_3(head_ref_a);
	}
}