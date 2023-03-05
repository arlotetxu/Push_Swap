//
// Created by Jose Manuel Florido Pereña on 20/2/23.
//
#include "push_swap.h"

/*
 * ADDING THE VALUES TO THE LIST
 *  After creating both stacks in the main file (ft_push_swap function)
 *  the arguments are added to the field "nb" and the corresponding "index"
 *  returned from the function "ft_get_array_index" after added to an int
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
	//The following fucntion prints the list
	ft_print_list(*head_ref_a);
	//Checking if the list is sorted
	printf("Sorted (1 -> NO // 0 -> YES): %d\n", ft_list_sorted(*head_ref_a));
	//ft_swap_a(head_ref_a);
}

/*
 * PRINTING THE LIST
 */
void	ft_print_list(t_node *head_ref)
{
	while (head_ref->next != NULL)
	//while (head_ref)
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
int	ft_list_sorted(t_node *head_ref)
{
	int	i;

	i = 0;
	while (head_ref->next != NULL)
	{
		if (head_ref->index != i)
			return (1);
		head_ref = head_ref->next;
		i++;
	}
	return (0);
}