/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:21 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/24 12:46:21 by arlo             ###   ########.fr       */
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
		//Check if the list is empty
		if (*head_ref_a == NULL)
			*head_ref_a = new_node;
		//If the list is not empty, we must go through it
		else
		{
			lst_node = (t_node *)malloc(sizeof (t_node));
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
 * This function calculates the maximum chars converting the
 * index of each node in binary. This number will be used to know
 * how many times the logical function should iterates.
 */
int	ft_max_index_binary(t_node **head_ref_a)
{
	t_node	*last;
	int		max;
	char	*binary;
	int		char_bin;

	max = 0;
	last = (*head_ref_a);
	binary = malloc(sizeof (int)); //TODO chequear este malloc. No convencido
	if (binary == NULL)
		return (0);
	while (last->next != NULL)
	{
		binary = ft_int2binary(last->index);
		char_bin = ft_count_char(binary);
		if (char_bin > max)
			max = char_bin;
		last = last->next;
	}
	if (ft_count_char(ft_int2binary(last->index)) > max)
		max = ft_count_char(ft_int2binary(last->index));
	free(binary); //TODO checking the free
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