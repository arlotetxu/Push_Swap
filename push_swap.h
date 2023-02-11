//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

//Define the list
typedef struct s_list
{
	int				nb;
	int				index;
	struct s_list	*next;
}					t_node;

//put your function headers here
int			sign_count(char *str);
size_t		ft_atoi(const char *str);
int			ft_check_limits(char *str_nb);
char 		*ft_int2binary(int n);

#endif //PUSH_SWAP_PUSH_SWAP_H
