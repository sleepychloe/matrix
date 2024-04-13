# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 23:40:10 by yhwang            #+#    #+#              #
#    Updated: 2024/04/13 01:04:05 by yhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex14
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++11
RM = rm -f

FILES = ./main

INCS_DIR = ../../matrix/incs/

PROGRAM_NAME = display
PROGRAM_REQUIRE = proj

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

%.o: %.cpp $(INCS_DIR)
	$(CPP) $(CFLAGS) -c $< -o $@ -I$(INCS_DIR)

all: $(NAME)
	./$(NAME) > $(PROGRAM_REQUIRE)
	./$(PROGRAM_NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $^ -o $@ -I$(INCS_DIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(PROGRAM_REQUIRE)

re: fclean all

.PHONY: all clean fclean re
