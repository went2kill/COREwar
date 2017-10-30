#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/27 15:19:20 by mpochuka          #+#    #+#              #
#    Updated: 2016/11/27 15:19:23 by mpochuka         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

UNAME := $(shell uname)

ifeq ($(UNAME), Darwin)
	CC = gcc
endif
ifeq ($(UNAME), Linux)
	CC = c99
endif

FAST = -Ofast

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -c

SRC =	ft_bzero.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_strcmp.c\
		ft_strlen.c\
		ft_strnstr.c\
		ft_toupper.c\
		ft_isalnum.c\
		ft_isprint.c\
		ft_strcat.c\
		ft_strcpy.c\
		ft_strncat.c\
		ft_strrchr.c\
		ft_isalpha.c\
		ft_memccpy.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strncmp.c\
		ft_strstr.c\
		ft_atoi.c\
		ft_isascii.c\
		ft_memcpy.c\
		ft_strclr.c\
		ft_strlcat.c\
		ft_strncpy.c\
		ft_tolower.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_strcstr.c\
		ft_str_un_i_chr.c\
		ft_str_i_chr.c\
		ft_itoa_u.c\
		ft_lstnew.c\
		ft_lstadd.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_itoa_base.c\
		ft_strjoin_d.c\
		get_next_line.c\
		ft_cntchr.c\
		ft_realloc.c\
		ft_newarr.c\
		ft_arrlen.c\
		ft_extarr.c\
		ft_arrdel.c\
		ft_putnstr.c\
		ft_strcstr_f.c\
		ft_strsub_d.c\
		ft_swap_chr.c\
		ft_swap_ptr.c\
		ft_strchrdel.c\
		ft_itoa_base_u.c\
		ft_putnbr_u.c\
		ft_revstr.c\
		ft_is_number.c\
		ft_newarrint.c

OBJ = $(SRC:.c=.o)

.PHONY: clean fclean re

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo  "\033[32mlibft library compilation finished\033[0m"

%.o: %.c
	@$(CC) $(FAST) $(CFLAGS) -o $@ $<

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f libft.h.gch
	@echo "\033[01;31mlibft object files deleted\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[01;31mFile Libtf.a deleted\033[0m"

re: fclean all

debug:
	@$(CC) $(CFLAGS) -g -c *.c
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo  "\033[32mlibft library compilation finished\033[0m"
