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
void		ps_ft_isdigit(char **argv);
void		ft_check_dupli(int *nb_array, int argc);
void		ft_error_exit(void);

//Other
char 		*ft_int2binary(int n);
int			*ft_add_nb_array(int argc, char **argv);
void		ft_sort_int_array(int *nbs, int argc);

//Main function
void		ft_push_swap(int argc, char **argv);

#endif //PUSH_SWAP_PUSH_SWAP_H
