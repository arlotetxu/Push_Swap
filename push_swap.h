/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:43:27 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/27 11:45:55 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

//Define the list
typedef struct n_list
{
	int				nb;
	int				index;
	struct n_list	*next;
}					t_node;

//put your function headers here

//Function to control the input
int			ft_check_limits(char *str_nb);
int			ft_check_dupli(int *nb_array, int argc);
void		ft_error_exit(void);
void		ft_success_exit(t_node *head_ref_a, t_node *head_ref_b);
int			ft_input_nb(char *str);

//Function to operate int array
int			ft_nb_binary(int n);
int			*ft_add_nb_array(int argc, char **argv);
void		ft_sort_int_array(int *nbs, int argc);
int			ft_get_array_index(int nb, int argc, char **argv);

//Function to operate lists
void		ft_add_info_list(t_node **head_ref_a, int argc, char **argv);
void		ft_print_list(t_node *head_ref);
int			ft_list_sorted(t_node *head_ref, int min_index);
int			ft_max_index_binary(t_node **head_ref_a);
int			ft_num_nodes(t_node *head_ref);

//Movements swap (sa, sb, ss)
void		ft_swap_a(t_node **head_ref_a, char id);
void		ft_swap_b(t_node **head_ref_b, char id);
void		ft_swap_ab(t_node **head_ref_a, t_node **head_ref_b);

//Movements push (pa, pb)
void		ft_push_b(t_node **head_ref_a, t_node **head_ref_b);
void		ft_push_a(t_node **head_ref_a, t_node **head_ref_b);

//Movements rotate (ra, rb, rr)
void		ft_rotate_a(t_node **head_ref_a, char id);
void		ft_rotate_b(t_node **head_ref_b, char id);
void		ft_rotate_ab(t_node **head_ref_a, t_node **head_ref_b);

//Movements rotate reversal (rra, rrb, rrr)
void		ft_rotate_r_a(t_node **head_ref_a, char id);
void		ft_rotate_r_b(t_node **head_ref_b, char id);
void		ft_rotate_r_ab(t_node **head_ref_a, t_node **head_ref_b);

//sorting the list
int			ft_list_min(t_node **head_ref_a);
int			ft_list_max(t_node **head_ref_a);
void		ft_sort_2(t_node **head_ref_a);
void		ft_sort_3(t_node **head_ref_a);
void		ft_sort_5(t_node **head_ref_a, t_node **head_ref_b);
void		ft_sort_radix(t_node **head_ref_a, t_node **head_ref_b);

//Function to free the ft_split function
void		ft_free_ft_split(char **str);

//Main function
void		ft_push_swap(int argc, char **argv);

#endif //PUSH_SWAP_PUSH_SWAP_H
