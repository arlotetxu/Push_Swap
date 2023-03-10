
#include "push_swap.h"

/*
 * Error Control:
 * Error(1) --> Error in function ps_ft_isdigit(char **argv) / some input is not a digit
 * Error(2) --> Error in function ft_check_limits(argv[i++]) / nb exceeds the integer limits
 * Error(4) --> Error in function ft_check_dupli(ft_add_nb_array(argc, argv)) / nb duplicated
 * Error(5) --> ft_atoi cannot convert the input string in a number
 *
 * TBD
 * - No controlo si el numero no es entero.
 * - Movimientos de rotacion y rotacion invertida.
 * - Saber cuantas veces iterar segun el valor mas alto del indice en binario.
 *
 * STATUS
 * - Desarrolados los movimientos de swap y push.
 * - Añadido chequeos en ft_push_swap para controlar que los movimientos se hacen
 * correctamente. Acordarse de comentar.
 *
 */
void	ft_push_swap(int argc, char **argv)
{
	int		i;
	t_node	*stack_a;
	t_node	*stack_b;
//
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (argv[i])
	{
		// Check whether the number is inside INT limits
		ft_check_limits(argv[i++]);
	}
	// Check if an input number is duplicated and sort the numbers
	// in the int array
	ft_check_dupli(ft_add_nb_array(argc, argv), argc);
	//Adding values to the stack_a
	ft_add_info_list(&stack_a, argc, argv);
	//CHECKS
	printf("DOING SA:\n");
	ft_swap_a(&stack_a);
	ft_print_list(stack_a);
	printf("DOING PB\n");
	ft_push_b(&stack_a, &stack_b);
	ft_push_b(&stack_a, &stack_b);
	printf("List_A\n");
	ft_print_list(stack_a);
	printf("List_B\n");
	ft_print_list(stack_b);
	printf("DOING PA\n");
	ft_push_a(&stack_a, &stack_b);
	printf("List_A\n");
	ft_print_list(stack_a);
	printf("List_B\n");
	ft_print_list(stack_b);
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_push_swap(argc, argv);
	}
	return 0;
}
