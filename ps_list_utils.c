/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:21 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/26 16:52:00 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * ADDING THE VALUES TO THE LIST
 *  After creating both stacks in the main file (ft_push_swap function)
 *  the arguments are added to the field "nb" and the corresponding "index"
 *  returned from the function "ft_get_array_index" after adding it to an int
 *  array and sorted them.
 */
void	ft_add_info_list(t_node **head_ref_a, int argc, char **argv)
{
	int		i;
	t_node	*new_node;
	t_node	*lst_node;

	i = 1;
	while (i < argc)
	{
		new_node = (t_node *)malloc(sizeof (t_node));
		new_node->nb = ft_atoi(argv[i]);
		new_node->index = ft_get_array_index(new_node->nb, argc, argv);
		new_node->next = NULL;
		if (*head_ref_a == NULL)
			*head_ref_a = new_node;
		else
		{
			lst_node = *head_ref_a;
			while (lst_node->next != NULL)
				lst_node = lst_node->next;
			lst_node->next = new_node;
		}
		i++;
	}
}

/*
 * PRINTING THE LIST
 */
void	ft_print_list(t_node *head_ref)
{
	while (head_ref->next != NULL)
	{
		printf("Number: %d 	--- 	Index: %d\n", head_ref->nb, head_ref->index);
		head_ref = head_ref->next;
	}
	printf("Number: %d 	--- 	Index: %d\n", head_ref->nb, head_ref->index);
}

/*
 * CHECK IF THE LIST IS SORTED
 * If the list is already sorted, the function returns 0,
 * else, returns 1.
 */
int	ft_list_sorted(t_node *head_ref, int min_index)
{
	int	i;

	i = min_index;
	while (head_ref->next != NULL)
	{
		if (head_ref->index != i)
			return (1);
		head_ref = head_ref->next;
		i++;
	}
	return (0);
}

/*
 * GETTING THE MAXIMUM CHARS IN BINARY FROM INDEX
 * This function counts the chars of a number in binary and
 * return the maximum. This number will be used to know
 * how many times the logical function should iterate.
 */
int	ft_max_index_binary(t_node **head_ref_a)
{
	t_node	*last;
	int		max;

	max = 0;
	last = (*head_ref_a);
	while (last->next != NULL)
	{
		if (ft_nb_binary(last->index) > max)
			max = ft_nb_binary(last->index);
		last = last->next;
	}
	if (ft_nb_binary(last->index) > max)
		max = ft_nb_binary(last->index);
	return (max);
}

/*
 * GETTING THE NUMBER OF NODES IN A LIST
 */
int	ft_num_nodes(t_node *head_ref)
{
	int	count;

	if (!head_ref)
		return (0);
	count = 0;
	while (head_ref->next != NULL)
	{
		head_ref = head_ref->next;
		count++;
	}
	return (count);
}
