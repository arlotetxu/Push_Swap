
#include "push_swap.h"

int main(int argc, char **argv)
{
	int	i;
	int nb;
	int *nb_array;

	i = 1;
	nb = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			// Check whether the number is inside INT limits
			nb = ft_check_limits(argv[i++]);
			printf("nb: %d\n", nb);
		}
		//Creating an integer array to sort the values
		nb_array = ft_add_nb_array(argc, argv);
		//Check if the array has been rightly created
		i = 0;
		while(nb_array[i])
		{
			printf("Valor %d en main: %d\n", i, nb_array[i]);
			i++;
		}
	}
	return 0;
}
