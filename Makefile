NAME	= push_swap

SRCS	= push_swap.c get_data.c get_data_utils.c\
			get_stack.c list.c\
			operations.c operations_n.c\
			choice_move.c sorting_three.c\
			ft_qsort_recursive.c\
			go_move_0.c go_move.c utils.c\

LIB 	= ./libft/libft.a

HEADER  = push_swap.h ./libft/libft.h

RM		= rm -f

OBJS	= $(SRCS:.c=.o)

GCC		= gcc

GFLAGS	= -Wall -Wextra -Werror

$(NAME):	$(OBJS) $(HEADER)
			$(MAKE) -C ./libft
			$(GCC) $(GFLAGS) $(OBJS) $(LIB) -o ${NAME}

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			$(MAKE) clean -C ./libft

fclean:		clean
			$(RM) $(NAME) ./libft/libft.a

re:			fclean all

.PHONY:		all clean fclean re
