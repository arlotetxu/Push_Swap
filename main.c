/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:32 by jflorido          #+#    #+#             */
/*   Updated: 2023/03/28 21:42:53 by arlo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(int argc, char **argv)
{
	int		i;
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (argv[i])
		ft_check_limits(argv[i++]);
	ft_check_dupli(ft_add_nb_array(argc, argv), argc);
	ft_add_info_list(&stack_a, argc, argv);
	if (ft_list_sorted(stack_a, ft_list_min(&stack_a)) == 0)
		ft_success_exit(stack_a, stack_b);
	if (argc == 3)
		ft_sort_2(&stack_a);
	else if (argc == 4)
		ft_sort_3(&stack_a);
	else if (argc == 6)
		ft_sort_5(&stack_a, &stack_b);
	else
		ft_sort_radix(&stack_a, &stack_b);
	ft_success_exit(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	char	**tmp;
	int		count;

	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		count = 0;
		while (tmp[count])
			count++;
		ft_push_swap(count, tmp);
	}
	else if (argc > 2)
		ft_push_swap(argc, argv);
	else
		ft_error_exit();
	return (0);
}
