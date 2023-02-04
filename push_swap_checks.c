//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#include "push_swap.h"

/*
 * ft_check_limits checks if each argument is within the INT range
 */
int	ft_check_limits(char *str_nb)
{
	//int	i;
	long long	nb;

	//i = 0;
	nb = ft_atoi(str_nb);
	if (nb < INT_MIN || nb > INT_MAX)
	{
		printf("El numero introducido: %lld ESTA FUERA DE RANGO INT\n", nb);
		return (1);
	}
	else
	{
		printf("%lld\n", nb);
	}
		return (0);
}