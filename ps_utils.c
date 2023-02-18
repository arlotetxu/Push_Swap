//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#include "push_swap.h"

/*
 *
 */
void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(2);
}

/*
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
 * int	*ft_add_nb_array(int argc, char **argv) adds input numbers
 * to an int array "nb_arr"
 */
int	*ft_add_nb_array(int argc, char **argv)
{
	int *nb_arr;
	int i;

	nb_arr = malloc(sizeof (int) * (argc - 1));//TODO Ojo hacer "free" antes de finalizar programa
//	printf("INT: %lu\n", sizeof (int));
//	printf("INT: %lu\n", sizeof (nb_arr));
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
//		printf("Valor %d: %d\n", i, nb_arr[i]);
//		i++;
//	}
	return (nb_arr);
}
