# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 17:58:49 by gchamore          #+#    #+#              #
#    Updated: 2023/11/23 09:58:46 by gchamore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_toupper.c ft_tolower.c
		
OBJS	= $(SRCS:.c=.o)

SRCS_BS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_BS = $(SRCS_BS:.c=.o)

CC		= cc

AR 		= ar rcs

RM 		= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:		$(NAME)	

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
# ar est l'utilitaire d'archivage en C. Il est 
# utilisé pour créer, mettre à jour et extraire 
# des fichiers depuis des archives.
# rc sont des options de ar. Elles signifient :
# r : Insère ou remplace des fichiers dans l'archive.
# c : Crée l'archive si elle n'existe pas encore.

bonus:		$(OBJS) $(OBJS_BS)
			$(AR) $(NAME) $(OBJS) $(OBJS_BS)

clean:
			$(RM) $(OBJS) $(OBJS_BS)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re