/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:32 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/18 08:54:10 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Error Control:
 * Error(1) --> Error in function ps_ft_isdigit(char **argv) / some input is not a digit
 * Error(2) --> Error in function ft_check_limits(argv[i++]) / nb exceeds the integer limits
 * Error(4) --> Error in function ft_check_dupli(ft_add_nb_array(argc, argv)) / nb duplicated
 * Error(5) --> ft_atoi cannot convert the input string in a number
 *
 * TBD
 * - Desarrollar logica para 3 argumentos
 * - Desarrollar logica para 5 argumentos
 *
 * STATUS
 * - Finalizado Control de entrada.
 * 		- No controlo si el numero no es entero. OK (controlado con la funcion atoi)
 * 		- No puede haber inputs del tipo 25abc (modificar atoi). OK
 * - Desarrolados los movimientos.
 * - Añadido chequeos en ft_push_swap para controlar que los movimientos se hacen
 * correctamente. Acordarse de comentar.
 * - Desarrollada logica para mas de 5 argumentos. ft_sort_radix

 *
 */
void	ft_push_swap(int argc, char **argv)
{
	int		i;
	t_node	*stack_a;
	t_node	*stack_b;

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
	// Check if the list is already sorted
	if (ft_list_sorted(stack_a) == 0)
		return ;
	//ft_max_index_binary(&stack_a);
//	ft_sort_3(&stack_a);
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	ft_sort_radix(&stack_a, &stack_b);
	if (argc == 3)
		ft_sort_2(&stack_a);
	else if (argc == 4)
		ft_sort_3(&stack_a);
	else if (argc > 6)
		ft_sort_radix(&stack_a, &stack_b);
	printf("List_A\n");
	ft_print_list(stack_a);
	//CHECKS
//	printf("----------------------------\n");
//	printf("DOING SA:\n");
//	ft_swap_a(&stack_a, 'a');
//	printf("List_A\n");
//	ft_print_list(stack_a);
////	printf("List_B\n");
////	ft_print_list(stack_b);
//	//----------------------------------
//	printf("----------------------------\n");
//	printf("DOING PB\n");
//	ft_push_b(&stack_a, &stack_b);
//	ft_push_b(&stack_a, &stack_b);
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	//----------------------------------
//	printf("----------------------------\n");
//	printf("DOING RA\n");
//	ft_rotate_a(&stack_a, 'a');
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	//----------------------------------
//	printf("----------------------------\n");
//	printf("DOING RB\n");
//	ft_rotate_b(&stack_b, 'b');
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	//----------------------------------
//	printf("----------------------------\n");
//	printf("DOING SS\n");
//	ft_swap_ab(&stack_a, &stack_b);
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	//----------------------------------
//	printf("----------------------------\n");
//	printf("DOING RR\n");
//	ft_rotate_ab(&stack_a, &stack_b);
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	printf("----------------------------\n");
//	printf("DOING RRA\n");
//	ft_rotate_r_a(&stack_a, 'a');
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	printf("----------------------------\n");
//	printf("DOING RRB\n");
//	ft_rotate_r_b(&stack_b, 'b');
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
//	printf("----------------------------\n");
//	printf("DOING RRR\n");
//	ft_rotate_r_ab(&stack_a, &stack_b);
//	printf("List_A\n");
//	ft_print_list(stack_a);
//	printf("List_B\n");
//	ft_print_list(stack_b);
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_push_swap(argc, argv);
	}
	return 0;
}
