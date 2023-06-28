# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 11:35:48 by jsilva-s          #+#    #+#              #
#    Updated: 2023/05/25 14:47:27 by jsilva-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c
SOURCES += ft_isascii.c ft_isprint.c ft_strlen.c
SOURCES += ft_tolower.c ft_toupper.c
SOURCES += ft_memset.c ft_bzero.c ft_memcpy.c
SOURCES += ft_memmove.c ft_strlcpy.c ft_strlcat.c
SOURCES += ft_strchr.c ft_strrchr.c ft_strncmp.c
SOURCES += ft_memchr.c ft_memcmp.c ft_strnstr.c
SOURCES += ft_atoi.c ft_calloc.c ft_strdup.c
SOURCES += ft_substr.c ft_strjoin.c ft_strtrim.c
SOURCES += ft_split.c ft_putchar_fd.c ft_putstr_fd.c
SOURCES += ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c
SOURCES += ft_striteri.c ft_itoa.c

# compile .c to .o
OBJECTS = ${SOURCES:.c=.o}

# @ supress commands to show in terminal
RM = rm -f

CC = cc 
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

# Adds object files *.o static library libft.a, creating libft.a if it no exist. -rc = replace and create
ARCHIVE = ar -rcs 

#Define a header and a index to library.
RANLIB = ranlib

BONUS = ft_lstnew_bonus.c 
BONUS += ft_lstadd_front_bonus.c ft_lstsize_bonus.c
BONUS += ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
BONUS += ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJECTS = $(BONUS:.c=.o)

$(NAME): ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}
	${RANLIB} ${NAME}
	${MSG1}

bonus: ${BONUS_OBJECTS}
	${ARCHIVE} ${NAME} ${BONUS_OBJECTS}
	${RANLIB} ${NAME}
	${MSG1}

# Default all command to compile
all: ${NAME}

# Clean generated .o files
clean:
	${RM} ${OBJECTS} ${BONUS_OBJECTS}
	${MSG2}

# Force clean all files generated on all
fclean: clean
	${RM} ${NAME}

# Regenarate compilation
re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re