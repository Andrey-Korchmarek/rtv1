# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mashley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 12:09:43 by mashley           #+#    #+#              #
#    Updated: 2019/10/02 17:06:42 by mashley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC = gcc -Wall -Wextra -Werror
RM = /bin/rm -rf

HEAD := libft.h get_next_line.h bonus.h tmp.h
HEADERS := $(addprefix ./includes/, $(HEAD))
INCLUDES := -I ./includes

DIR_SRC := ./srcs/
DIR_BUILD := ./build/
SUBDIR := arr/ chr/ dot/ fun/ gnl/ is/ loc/ lst/ mem/ num/ put/ str/ txt/ way/ bonus/
MKDIR_BUILD := $(addprefix $(DIR_BUILD), $(SUBDIR))

SRCS := ARR CHR DOT FUN GNL IS LOC LST MEM NUM PUT STR TXT WAY BONUS
ARR := ft_range.c ft_free_array.c ft_free_matrix.c
CHR := ft_tolower.c ft_toupper.c
DOT := ft_change_dot3.c ft_lenline3.c ft_movdot3.c ft_newdot3.c
FUN := ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c
GNL := ft_wdcounter.c get_next_line.c
IS  := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_ischar.c ft_isdigit.c ft_ishex.c ft_ishexlow.c ft_ishexnumber.c ft_ishexup.c ft_islower.c ft_ismark.c ft_isnumber.c ft_ispoint.c ft_isprint.c ft_issign.c ft_isspace.c ft_isupper.c
LOC := ft_memalloc.c ft_realloc.c ft_strdel.c ft_strdup.c ft_strjoin.c ft_strjoinfree.c ft_strnew.c ft_strsub.c
LST := ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c
MEM := ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memrcpy.c ft_memset.c
NUM := ft_abs_f.c ft_abs.c ft_atoi_base.c ft_atoi.c ft_atoll.c ft_intlen.c ft_itoa.c
PUT := ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c
STR := ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcount.c ft_strcpy.c ft_strequ.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnlen.c ft_strnstr.c ft_strplen.c ft_strrchr.c
TXT := ft_open_read.c ft_strsplit.c ft_strstr.c ft_strtrim.c
WAY := ft_mulway.c ft_newway.c ft_scpway.c ft_sumway.c ft_vecpway.c ft_wayfromdots.c ft_waylenght.c
BONUS = ft_shrinking_gap.c ft_quadratic.c
TMP = ft_main.c

SOURCES := 	$(addprefix arr/, $(ARR)) \
			$(addprefix chr/, $(CHR)) \
			$(addprefix dot/, $(DOT)) \
			$(addprefix fun/, $(FUN)) \
			$(addprefix gnl/, $(GNL)) \
			$(addprefix is/, $(IS)) \
			$(addprefix loc/, $(LOC)) \
			$(addprefix lst/, $(LST)) \
			$(addprefix mem/, $(MEM)) \
			$(addprefix num/, $(NUM)) \
			$(addprefix put/, $(PUT)) \
			$(addprefix str/, $(STR)) \
			$(addprefix txt/, $(TXT)) \
			$(addprefix way/, $(WAY)) \
			$(addprefix bonus/, $(BONUS)) \
			$(TMP)
CFILES := $(addprefix $(DIR_SRC), $(SOURCES))

OBJECTS = $(SOURCES:%.c=%.o)
OFILES = $(addprefix $(DIR_BUILD), $(OBJECTS))

FILES = ./*/*.c

.PHONY: all $(NAME) $(MKDIR_BUILD) clean fclean re

#.SILENT: $(OFILES)

all : $(NAME)

$(NAME): $(MKDIR_BUILD) $(OFILES)
	@ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

$(MKDIR_BUILD):
	@mkdir -p $(DIR_BUILD)
	@mkdir -p $(MKDIR_BUILD)

$(DIR_BUILD)%.o : $(DIR_SRC)%.c $(HEADERS)
	@$(CC) -c $< -o $@ $(INCLUDES)

clean :
	@$(RM) $(DIR_BUILD)

fclean : clean
	@$(RM) $(NAME)

re : fclean all