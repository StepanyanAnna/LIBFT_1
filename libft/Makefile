NAME	= libft.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

SRCS	= $(wildcard *.c)

OBJS	= $(patsubst %.c, %.o, $(SRCS))

AR		= ar rcs

RM		= rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS		= $(BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)


.PHONY: all clean fclean re


