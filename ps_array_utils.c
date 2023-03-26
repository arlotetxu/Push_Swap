/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_array_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:54 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/26 17:09:52 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * GETTING THE BINARY DIGITS
 * This functions calculates the digits of a number
 * in binary mode.
 */
int	ft_nb_binary(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		n = n / 2;
		i++;
	}
	return (i);
}

/*
 * ADDING THE INPUT ARGUMENTS TO AN ARRAY OF INTEGERS
 * adds input numbers to an int array "nb_arr".
 * The function also calls the function "ft_sort_int_array"
 * to sort the values within the array.
 */
int	*ft_add_nb_array(int argc, char **argv)
{
	int	*nb_arr;
	int	i;

	nb_arr = malloc(sizeof (int) * (argc - 1));
	if (!nb_arr)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		nb_arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_sort_int_array(nb_arr, argc);
	return (nb_arr);
}

/*
 * SORTING AN INT ARRAY
 * The function receives an array of ints and the number of arguments
 * in the input and sorts the values.
 */
void	ft_sort_int_array(int *nbs, int argc)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < argc - 2)
	{
		j = 0;
		while (j < argc - i - 2)
		{
			if (nbs[j] > nbs[j + 1])
			{
				aux = nbs[j];
				nbs[j] = nbs[j + 1];
				nbs[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

/*
 * GETTING THE INDEX OF A NUMBER IN AN INT ARRAY AFTER SORTED THE VALUES
 * ft_get_array_index(int nb, int argc, char **argv) duplicates the array
 * and return the index of the given number in the parameter "nb"
 */
int	ft_get_array_index(int nb, int argc, char **argv)
{
	int	i;
	int	*nb_array;

	nb_array = ft_add_nb_array(argc, argv);
	i = 0;
	while (i < argc - 1)
	{
		if (nb == nb_array[i])
		{
			free(nb_array);
			nb_array = NULL;
			return (i);
		}
		i++;
	}
	free(nb_array);
	nb_array = NULL;
	return (0);
}
