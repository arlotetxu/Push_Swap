//
// Created by Jose Manuel Florido Pereña on 13/3/23.
//

#include "push_swap.h"
/*
 * SORTING A LIST WITH MORE THAN 5 ARGUMENTS
 */

void	ft_sort_radix(t_node **head_ref_a, t_node **head_ref_b)
{
	int		iter;
	int		i;
	int 	nodes;
	t_node	*last;

	iter = ft_max_index_binary(head_ref_a);
	//printf("Iter: %d\n", iter);
	i = 0;
	last = (*head_ref_a);

	while (i < iter)
	{
		nodes = ft_num_nodes(*head_ref_a);
		while (nodes-- >= 0)
		{
			last = (*head_ref_a);
			//printf("BIT: %d\n", last->index >> i);
			if (((last->index) >> i & 1) == 1)
				ft_rotate_a(head_ref_a, 'a');
			else
				ft_push_b(head_ref_a, head_ref_b);
		}
		while (ft_num_nodes(*head_ref_b) != 0)
			ft_push_a(head_ref_a, head_ref_b);
		ft_push_a(head_ref_a, head_ref_b);
		if (ft_list_sorted(*head_ref_a) == 0)
			break;
		i++;
	}
	printf("LIST-A\n");
	ft_print_list(*head_ref_a);
//	printf("LIST-B\n");
//	ft_print_list(*head_ref_b);
}
