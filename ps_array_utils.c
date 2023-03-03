//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#include "push_swap.h"

/*
 * CONVERTING A NUMBER TO BINARY
 * ft_int2binary return the binary number of an integer number
 */
char *ft_int2binary(int n)
{
	int		nbinary[32];
	char	*nbinary_s;
	int 	i;
	int		j;

	i = 0;
	while (n > 0)
	{
		nbinary[i] = n % 2;
		n = n / 2;
		i++;
	}
	nbinary_s = malloc(sizeof(char) * i);
	if (!nbinary_s)
		return (NULL);
	j = 0;
	while(i > 0)
	{
		nbinary_s[j] = nbinary[i - 1] + '0';
		i--;
		j++;
	}
	nbinary_s[j] = '\0';
	return (nbinary_s);
}

/*
 * ADDING THE INPUT ARGUMENTS TO AN ARRAY OF INTEGERS
 * adds input numbers to an int array "nb_arr".
 * The function also calls the function "ft_sort_int_array"
 * to sort the values within the array.
 */
int	*ft_add_nb_array(int argc, char **argv)
{
	int *nb_arr;
	int i;

	nb_arr = malloc(sizeof (int) * (argc - 1));//TODO Ojo hacer "free" antes de finalizar programa
	if (!nb_arr)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		nb_arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
//	// Checking whether the values have been properly added
//	i = 0;
//	while (nb_arr[i])
//	{
//		printf("Valor %d en funcion: %d\n", i, nb_arr[i]);
//		i++;
//	}
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
	//Checking the order
//	i = 0;
//	while (i < argc - 1)
//	{
//		printf("Index %d: %d\n", i, nbs[i]);
//		i++;
//	}
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
			//printf("Index of %d: %d\n", nb, i);
			return (i);
		}
		i++;
	}
	return (0);
}