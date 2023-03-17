/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checks_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:09 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/17 09:42:13 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * WRITING THE ERROR
 */
void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(2);
}

/*
 * ft_check_limits checks if each argument is within the INT range
 * ft_atoi has been modified in order to check if the parameters contains
 * numbers.
 */
int	ft_check_limits(char *str_nb)
{
	long long	nb;

	nb = ft_atoi(str_nb);
	if (nb < -2147483648 || nb > 2147483647)
	{
		write(1, "Error(2)\n", 9);
		exit(1);
	}
	return (nb);
}

/*
 * ft_check_dupli checks if any input number parameter is duplicated.
 * It receives as an argument an int array previously created with the function
 * ft_add_nb_array(int argc, char **argv) whithin the file ps_utils.c
 */
void	ft_check_dupli(int *nb_array, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (nb_array[j] == nb_array[i])
			{
				write(1, "Error(4)\n", 9);
				exit(2);
			}
			j++;
		}
		i++;
	}
}
