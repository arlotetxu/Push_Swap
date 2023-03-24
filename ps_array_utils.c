/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_array_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:54 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/24 16:07:09 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * CONVERTING A NUMBER TO BINARY
 * ft_int2binary return the binary number of an integer number
 */
char	*ft_int2binary(int n)
{
	int		nbinary[32];
	char	*nbinary_s;
	int		i;
	int		j;

	i = 0;
	while (n > 0)
	{
		nbinary[i] = n % 2;
		n = n / 2;
		i++;
	}
	nbinary_s = malloc(sizeof(char) * i); //TODO liberar esta memoria??
	if (!nbinary_s)
		return (NULL);
	j = 0;
	while (i > 0)
	{
		nbinary_s[j] = nbinary[i - 1] + '0';
		i--;
		j++;
	}
	nbinary_s[j] = '\0';
	return (nbinary_s);
}

/*
 * COUNT THE NUMBER OF CHARS IN A STRING
 * I do it to know later on how many times the logical
 * function should iterate.
 * See ft_max_index_binary
 */
int	ft_count_char(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i++])
		count = count + 1;
	return (count);
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

	nb_arr = malloc(sizeof (int) * (argc - 1)); //TODO Donde liberar este malloc?
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
		while (j < argc - i - 2 )
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
	int	*nb_array; //TODO hacer malloc?

	nb_array = ft_add_nb_array(argc, argv);
	i = 0;
	while (i < argc - 1)
	{
		if (nb == nb_array[i])
			return (i);
		i++;
	}
	return (0);
}
