//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#include "push_swap.h"

/*
 * ft_check_limits checks if each argument is within the INT range
 */
int	ft_check_limits(char *str_nb)
{
	long long	nb;

	nb = ft_atoi(str_nb);
	if (nb < -2147483648 || nb > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (nb);
}