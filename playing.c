//
// Created by Jose Manuel Florido Perena on 2/4/23.
//

#include<stdio.h>
#include<stdlib.h>


static int	ft_checksign(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == 43 || str[i] == 45)
			count++;
		i++;
	}
	if (count > 1)
		return (0);
	else
		return (1);
}

long long	ft_atoi(const char *str)
{
	int	i;
	long long	n;
	int	sign;
	int	c_sign;

	i = 0;
	sign = 1;
	c_sign = ft_checksign(str);
	while ((str[i] != '\0' && str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45))
	{
		if (c_sign == 0)
			return (0);
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	n = 0;
	if (str[i] < 48 || str[i] > 57)
		printf("Controlando\n");
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

int main(void)
{
	char	*c;
	int 	nb;

	c = "-12a";
	nb = ft_atoi(c);
	printf("valor: %d\n", nb);
	return (0);
}