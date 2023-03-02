//
// Created by Jose Manuel Florido Pereña on 20/2/23.
//

#include "push_swap.h"

/*
 * ADDING THE VALUES TO THE LIST
 * Tras crear los dos stacks en main, añadir los valores de argv al campo
 * "nb" de la lista y el indice obtenido de la funcion
 *  ft_get_array_index(int nb, int argc, char **argv) en el campo "index"
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
		if(*head_ref_a == NULL)
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
	ft_print_list(*head_ref_a);
}

void	ft_print_list(t_node *head_ref)
{
	while (head_ref->next != NULL)
	{
		printf("Number: %d -- Index: %d\n", head_ref->nb, head_ref->index);
		head_ref = head_ref->next;
	}
}