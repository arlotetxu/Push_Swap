
#include "push_swap.h"

/*
 * Error Control:
 * Error(1) --> Error in function ps_ft_isdigit(char **argv) / some input is not a digit
 * Error(2) --> Error in function ft_check_limits(argv[i++]) / nb exceeds the integer limits
 * Error(4) --> Error in function ft_check_dupli(ft_add_nb_array(argc, argv)) / nb duplicated
 */
void	ft_push_swap(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		// Check if the inputs are digits
		//ps_ft_isdigit(argv);
		// Check whether the number is inside INT limits
		ft_check_limits(argv[i++]);
	}
	// Check if an input number is duplicated
	ft_check_dupli(ft_add_nb_array(argc, argv), argc);
	ft_sort_int_array(ft_add_nb_array(argc, argv), argc);
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_push_swap(argc, argv);
	}
	return 0;
}
