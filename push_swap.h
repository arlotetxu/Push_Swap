//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

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
//void		ps_ft_isdigit(char **argv);
void		ft_check_dupli(int *nb_array, int argc);
void		ft_error_exit(void);

//Function to operate int array
char 		*ft_int2binary(int n);
int			*ft_add_nb_array(int argc, char **argv);
void		ft_sort_int_array(int *nbs, int argc);
int			ft_get_array_index(int nb, int argc, char **argv);

//Function to operate lists
void		ft_add_info_list(t_node **head_ref_a, int argc, char **argv);
void		ft_print_list(t_node *head_ref);
int			ft_list_sorted(t_node *head_ref);

//Main function
void		ft_push_swap(int argc, char **argv);

#endif //PUSH_SWAP_PUSH_SWAP_H
