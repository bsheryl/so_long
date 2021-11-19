NAME	=	so_long

SRCS	=	./srcs/check_extension.c		./srcs/check_map.c		./srcs/close_game.c\
			./srcs/color_ground.c			./srcs/ft_puterror.c	./srcs/go_to.c\
			./srcs/init_struct.c			./srcs/main.c			./srcs/open_game.c\
			./srcs/open_images.c			./srcs/open_wall.c		./srcs/put_images.c\
			./srcs/put_wall.c				./srcs/read_map.c		./srcs/put_step_count.c\
			./srcs/check_symbol.c

HEADER	=	includes/so_long.h

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc

LIBFT	=	-L libft -lft

LIBMLX	=	-L minilibx_opengl_20191021 -lmlx -framework OpenGL -framework AppKit

INC		=	-I includes -I libft -I minilibx_opengl_20191021

CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(INC) $(LIBFT) $(LIBMLX) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJS)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
