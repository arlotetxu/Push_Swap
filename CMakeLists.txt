cmake_minimum_required(VERSION 3.23)
project(Push_Swap C)

set(CMAKE_C_STANDARD 99)

add_executable(Push_Swap main.c ps_checks_input.c push_swap.h ps_array_utils.c playing.c libft/ft_atoi.c libft/ft_isdigit.c ps_list_utils.c ps_mv_swap.c ps_mv_push.c ps_mv_rotate.c ps_mv_rotate_r.c ps_sort_radix.c ps_sort_2_3_5.c libft/ft_split.c libft/ft_strlen.c libft/ft_substr.c)
