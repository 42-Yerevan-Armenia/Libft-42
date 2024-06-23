NAME        =   libft.a
SRCS        =   $(shell find . -maxdepth 1 -name "*.c" ! -name "ft_lst*.c")
BONUS       =   $(shell find . -maxdepth 1 -name "ft_lst*.c")
OBJS        =   $(SRCS:.c=.o)
OBJS_B      =   $(BONUS:.c=.o)

# SRCS		=	$(wildcard *.c)
# BONUS		=	$(wildcard ft_lst*.c)
# FILTER		=	$(filter-out $(BONUS), $(SRCS))
# OBJS		=	$(patsubst %.c, %.o, $(FILTER))
# OBJS_B		=	$(patsubst %.c, %.o, $(BONUS))

CC          =   cc
RM          =   rm -f
CFLAGS      =   -Wall -Werror -Wextra
AR          =   ar rcs

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS_B)
			$(AR) $(NAME) $(OBJS_B)

clean:      
			$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all bonus clean fclean re
