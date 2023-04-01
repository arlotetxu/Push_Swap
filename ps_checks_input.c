/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checks_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:09 by jflorido          #+#    #+#             */
/*   Updated: 2023/04/01 09:48:34 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * EXITING WHEN ERROR
 */
void	ft_error_exit(void)
{
	write(2, "Error\n", 6);
	exit(2);
}

/*
 * EXITING WHEN SUCCESS
 */
void	ft_success_exit(t_node *head_ref_a, t_node *head_ref_b)
{
	t_node	*aux;

	while (head_ref_a)
	{
		aux = head_ref_a;
		head_ref_a = head_ref_a->next;
		free(aux);
	}
	while (head_ref_b)
	{
		aux = head_ref_b;
		head_ref_b = head_ref_b->next;
		free(aux);
	}
	return ;
}

/*
 * CHECKING THE INPUT LIMITS (INT)
 * ft_check_limits checks if each argument is within the INT range
 * ft_atoi has been modified in order to check if the parameters contains
 * numbers.
 */
int	ft_check_limits(char *str_nb)
{
	long long	nb;

	nb = ft_atoi(str_nb);
	if (nb < -2147483648 || nb > 2147483647)
		ft_error_exit();
	return (nb);
}

/*
 * CHECKING DUPLICATES IN INPUT
 * ft_check_dupli checks if any input number parameter is duplicated.
 * It receives as an argument an int array previously created with the function
 * ft_add_nb_array(int argc, char **argv) whithin the file ps_utils.c
 */
int	ft_check_dupli(int *nb_array, int argc)
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
				free(nb_array);
				return (write (2, "Error\n", 6), 2);
			}
			j++;
		}
		i++;
	}
	free(nb_array);
	return (0);
}

/*
 * CHECK IF THERE IS A NUMBER IN INPUT
 */
int	ft_input_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			return (1);
		i++;
	}
	return (0);
}
