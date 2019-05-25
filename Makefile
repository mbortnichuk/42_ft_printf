# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/19 16:51:00 by mbortnic          #+#    #+#              #
#    Updated: 2018/02/05 20:07:39 by mbortnic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_handle_str.c \
			ft_handle_wchr.c \
			ft_handle_wstr.c \
			ft_handle_hexadec.c \
			ft_handle_octal.c \
			ft_handle_decimals.c \
			ft_val_sign.c \
			ft_val_unsig.c \
			ft_printf.c \
			ft_specif.c \
			ft_flags.c \
			ft_output.c \
			ft_auxiliary_func1.c \
			ft_auxiliary_func2.c

OBJ = $(SRC:.c=.o)

LIBF = ./libft/

LIBH = ./libft/libft.h

INCL = libftprintf.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(LIBF)libft.a
	@ echo "\033[32;1m(•̀ᴗ•́)و Wait a sec.(•̀ᴗ•́)و \033[0m"
	@ ar rc $(NAME) $(OBJ) $(LIBF)*.o
	@ ranlib $(NAME)
	@ echo "\033[32;1m(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ libftprintf.a ready to go*:・ﾟ✧(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧\033[0m"

%.o: %.c
	 @ gcc $(CFLAGS) -c $< -o $@ -I $(LIBF) -I $(LIBH) -I $(INCL)

$(LIBF)libft.a:
	@ make -C $(LIBF)

clean:
	@ make clean -C $(LIBF)
	@ $(RM) $(OBJ)
	@ echo "\033[33;1mft_printf obj files are removed\033[0m"

fclean: clean
	@ make fclean -C $(LIBF)
	@ $(RM) $(NAME)
	@ echo "\033[31;1m$(NAME) is deleted\033[0m"

re: fclean all
	@ echo "\033[36;1m(•̀ᴗ•́)و re is performed\033[0m"

norm:
	@ echo "\033[35;1mWait a sec.\033[0m"
	norminette *.c *.h ./libft/*.c *.h
	@ echo "\033[35;1mnorminette check finished\033[0m"

.PHONY: all clean fclean re norm