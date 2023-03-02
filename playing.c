//#include<stdlib.h>
//#include<stdio.h>
//
//typedef struct p_list
//{
//	int				nb;
//	int				index;
//	struct p_list	*next;
//}					t_node;
//
//void	ft_add_lstnode(t_node **head_ref, int num, int ind)
//{
//	t_node	*new_node;
//	t_node	*lst_node;
//
//	new_node = (t_node *) malloc(sizeof (t_node));
//	new_node->nb = num;
//	new_node->index = ind;
//	new_node->next = NULL;
//	//Si la lista esta ya vacia, el nodo que creamos sera el de cabecera
//	if (*head_ref == NULL)
//	{
//		*head_ref = new_node;
//		return ;
//	}
//	//Si no esta vacia, hay que recorrerla hasta llegar al final donde next == NULL
//	lst_node = (t_node *) malloc(sizeof(t_node));
//	lst_node = *head_ref;
//	while (lst_node->next != NULL)
//		lst_node = lst_node->next;
//	lst_node->next = new_node;
//}
//
//void	ft_print_list(t_node *head_ref)
//{
//	while (head_ref->next != NULL)
//	{
//		printf("Number: %d -- Index: %d\n", head_ref->nb, head_ref->index);
//		head_ref = head_ref->next;
//	}
//}
//
//
//int	main(void)
//{
//	t_node	*list_a;
//	int		i = 0;
//	int		nb[5] = {12, 18, 1, 67, 0};
//
//	list_a = NULL;
//	while (i <= 5)
//	{
//		ft_add_lstnode(&list_a, nb[i], i);
//		i++;
//	}
//	ft_print_list(list_a);
//	return (0);
//}