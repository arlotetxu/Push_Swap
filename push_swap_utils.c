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
int ft_atoi(const char *str)
{
	size_t	i;
	size_t	n;
	char	*s;
	int	sign;

	s = (char *)str;
	i = 0;
	if (!str)
		return (0);
	while ((s[i] != '\0' && s[i] >= 9 && s[i] <= 13) || (str[i] == 32))
		i++;
	sign = 1;
	while (s[i] != '\0' && (s[i] == 43 || s[i] == 45))
	{
		if (sign_count((char *)str) == 0)
			return (0);
		if (s[i] == 45)
			sign = -1;
		i++;
	}
	n = 0;
	while (s[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}
