# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 16:18:00 by nel-alla          #+#    #+#              #
#    Updated: 2019/10/23 17:31:19 by nel-alla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_strlen.c ft_tolower.c ft_isdigit.c ft_isascii.c ft_isalpha.c \
		ft_isalnum.c ft_calloc.c ft_atoi.c ft_bzero.c ft_isprint.c \
		ft_toupper.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c \
		ft_strdup.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memset.c \
		ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memcmp.c ft_split.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c

OBJECTS = ft_strlen.o ft_tolower.o ft_isdigit.o ft_isascii.o ft_isalpha.o \
		  ft_isalnum.o ft_calloc.o ft_atoi.o ft_bzero.o ft_isprint.o \
		  ft_toupper.o ft_strncmp.o ft_strlcat.o ft_strlcpy.o ft_strnstr.o \
		  ft_strdup.o ft_strchr.o ft_strrchr.o ft_memchr.o ft_memset.o \
		  ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memcmp.o ft_split.o \
		  ft_substr.o ft_strjoin.o ft_strtrim.o ft_strmapi.o ft_putchar_fd.o \
		  ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_itoa.o

BFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BOBJECTS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o \
		   ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
		   ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(FILES) libft.h
	@gcc -Wextra -Werror -Wall -c $(FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	
clean:
	@rm -f $(OBJECTS) $(BOBJECTS)

bonus:
	@gcc -Wextra -Werror -Wall -c $(FILES) $(BFILES)
	@ar rc $(NAME) $(OBJECTS) $(BOBJECTS)
	@ranlib $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all
