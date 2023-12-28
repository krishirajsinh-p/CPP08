# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 07:51:41 by kpuwar            #+#    #+#              #
#    Updated: 2023/12/28 08:00:45 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=  MutantStack

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	= MutantStack.hpp
SRCS		= main.cpp
OBJS		= ${SRCS:.cpp=.o}

RM			= rm -rf

$(NAME): $(SRCS) $(OBJS) $(INCLUDES)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
