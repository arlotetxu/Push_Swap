
#include "push_swap.h"

/*
 * Error Control:
 * Error(1) --> Error in function ps_ft_isdigit(char **argv) / some input is not a digit
 * Error(2) --> Error in function ft_check_limits(argv[i++]) / nb exceeds the integer limits
 * Error(4) --> Error in function ft_check_dupli(ft_add_nb_array(argc, argv)) / nb duplicated
 * Error(5) --> ft_atoi cannot convert the input string in a number
 */
void	ft_push_swap(int argc, char **argv)
{
	int		i;
//	t_node	*stack_a;
//	t_node	*stack_b;
//
//	stack_a = NULL;
//	stack_b = NULL;
	i = 1;
	while (argv[i])
	{
		// Check whether the number is inside INT limits
		ft_check_limits(argv[i++]);
	}
	// Check if an input number is duplicated and sort the numbers
	// in the int array
	ft_check_dupli(ft_add_nb_array(argc, argv), argc);
	ft_get_array_index(-1, argc, argv);
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_push_swap(argc, argv);
	}
	return 0;
}
