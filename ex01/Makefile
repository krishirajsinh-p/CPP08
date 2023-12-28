# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 02:01:33 by kpuwar            #+#    #+#              #
#    Updated: 2023/12/28 02:01:46 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=  Span

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

CLASSES		= Span
INCLUDES	= $(addsuffix .hpp, $(CLASSES))
SRCS		= main.cpp $(addsuffix .cpp, $(CLASSES))
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
