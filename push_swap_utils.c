//
// Created by Jose Manuel Florido Pereña on 30/1/23.
//

#include "push_swap.h"

/*
 * The sign function checks the number of signs in a string number.
 * This function is called from ft_atoi
 */
int	sign_count(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == 43 || str[i] == 45)
			counter++;
		i++;
	}
	if (counter > 1)
		return (0);
	else
		return (1);
}

/*
 * ft_atoi converts a string number in an integer number
 */
//size_t ft_atoi(const char *str)
//{
//	size_t	i;
//	size_t	n;
//	char	*s;
//	int	sign;
//
//	s = (char *)str;
//	i = 0;
//	if (!str)
//		return (0);
//	while ((s[i] != '\0' && s[i] >= 9 && s[i] <= 13) || (str[i] == 32))
//		i++;
//	sign = 1;
//	while (s[i] != '\0' && (s[i] == 43 || s[i] == 45))
//	{
//		if (sign_count((char *)str) == 0)
//			return (0);
//		if (s[i] == 45)
//			sign = -1;
//		i++;
//	}
//	n = 0;
//	while (s[i] != '\0' && str[i] >= 48 && str[i] <= 57)
//	{
//		n = n * 10 + (str[i] - '0');
//		i++;
//	}
//	return (n * sign);
//}

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
 * Meter los numeros en un array int
 */

int	*ft_add_nb_array(int argc, char **argv)
{
	int *nb_arr;
	int i;

	nb_arr = malloc(sizeof (int) * (argc));
	if (!nb_arr)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
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