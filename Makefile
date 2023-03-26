NAME = push_swap

define HEADER

8888888b.  888     888  .d8888b.  888    888        .d8888b.  888       888        d8888 8888888b.
888   Y88b 888     888 d88P  Y88b 888    888       d88P  Y88b 888   o   888       d88888 888   Y88b
888    888 888     888 Y88b.      888    888       Y88b.      888  d8b  888      d88P888 888    888
888   d88P 888     888  "Y888b.   8888888888        "Y888b.   888 d888b 888     d88P 888 888   d88P
8888888P"  888     888     "Y88b. 888    888           "Y88b. 888d88888b888    d88P  888 8888888P"
888        888     888       "888 888    888             "888 88888P Y88888   d88P   888 888
888        Y88b. .d88P Y88b  d88P 888    888       Y88b  d88P 8888P   Y8888  d8888888888 888
888         "Y88888P"   "Y8888P"  888    888        "Y8888P"  888P     Y888 d88P     888 888

       _                                                      ___       ___
  o  _|_  |   _   ._  o   _|   _      /     /\   ._  |    _    |    _    |       | |
  |   |   |  (_)  |   |  (_|  (_)    /     /--\  |   |_  (_)   |   (/_   |   ><  |_|
 _|

endef
export HEADER

CC 			= 	gcc
CFLAGS 		= 	-Wall -Wextra -Werror
RM 			= 	rm -rf

SRC 		= 	main.c ps_array_utils.c ps_checks_input.c \
				ps_list_utils.c ps_mv_push.c ps_mv_rotate.c \
				ps_mv_rotate_r.c ps_mv_swap.c \
				ps_sort_2_3_5.c ps_sort_radix.c \

LIBFT 		= 	libft/libft.a

OBJS 		= 	$(SRC:.c=.o)
#OBJS_Bonus = $(SRC_Bonus:.c=.o)

#AR      = ar
#AFLAG   = -rc

#Colors:

DEF_COLOR 	= \033[0;39m
GRAY 		= \033[0;90m
RED 		= \033[0;31m
GREEN 		= \033[0;92m
YELLOW 		= \033[0;93m
BLUE 		= \033[0;94m
MAGENTA 	= \033[0;95m
CYAN 		= \033[0;96m
WHITE 		= \033[0;97m

# ====================================================================== #

all: $(NAME)

$(LIBFT):
	@make -C ./libft

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)$$HEADER$(DEF_COLOR)"
	@echo "$(GREEN)push_swap compiled!$(DEF_COLOR)"

%.o : %.c
	@echo "$(BLUE)Compiling $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@


#bonus: $(OBJS) $(OBJS_Bonus)
#	$(AR) $(AFLAG) $(NAME) $^

clean:
	$(RM) $(OBJS)
	@make clean -C ./libft
	@echo "$(YELLOW)&(OBJS) --> Files removed.$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@MAKE fclean -C ./libft
	@echo "$(RED)$(NAME) Files removed!$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re