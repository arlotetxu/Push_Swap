//
// Created by Jose Manuel Florido Perena on 2/4/23.
//

#include<stdio.h>
#include<stdlib.h>

/*
 * ft_int2binary return the binary number of an integer number
 */
//char *ft_int2binary(int n)
//{
//	int		nbinary[32];
//	char	*nbinary_s;
//	int 	i;
//	int		j;
//
//	i = 0;
//	while (n > 0)
//	{
//		nbinary[i] = n % 2;
//		n = n / 2;
//		i++;
//	}
//	nbinary_s = malloc(sizeof(char) * i);
//	if (!nbinary_s)
//		return (NULL);
//	j = 0;
//	while(i > 0)
//	{
//		nbinary_s[j] = nbinary[i - 1] + '0';
//		i--;
//		j++;
//	}
//	nbinary_s[j] = '\0';
//	return (nbinary_s);
//}

//int	main(void)
//{
//	int	n;
//
//	n = 132;
//	printf("Binario: %s\n", ft_int2binary(n));
//	printf("Binario: %s\n", ft_int2binary(n >> 2));
//	printf("Binario: %s\n", ft_int2binary(n));
//
//	return (0);
//}
