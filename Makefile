NAME = push_swap

define HEADER


  ___ _   _ ___ _  _   _____      ___   ___
 | _ \ | | / __| || | / __\ \    / /_\ | _ \
 |  _/ |_| \__ \ __ | \__ \\ \/\/ / _ \|  _/
 |_|  \___/|___/_||_| |___/ \_/\_/_/ \_\_|



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
	@echo "$$HEADER"
	@echo "$(GREEN)push_swap compiled!$(DEF_COLOR)"

%.o : %.c
	@echo "$(BLUE)Compiling $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@


#bonus: $(OBJS) $(OBJS_Bonus)
#	$(AR) $(AFLAG) $(NAME) $^

clean:
	$(RM) $(OBJS)
	@make clean -C ./libft
	@echo "$(YELLOW)&(OBJS) --> File removed.$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@MAKE fclean -C ./libft
	@echo "$(RED)$(NAME) Files removed!$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re