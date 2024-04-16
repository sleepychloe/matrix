# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 23:40:10 by yhwang            #+#    #+#              #
#    Updated: 2024/04/16 16:14:50 by yhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET	:= $(shell tput -Txterm sgr0)
RED	:= $(shell tput -Txterm setaf 1)

NAME = ex14
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17
RM = rm -f

FILES = ./main

INCS_DIR = ../../matrix/incs/

PROGRAM_REQUIRE = proj
PROGRAM_NAME = display

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

%.o: %.cpp $(INCS_DIR)
	$(CPP) $(CFLAGS) -c $< -o $@ -I$(INCS_DIR)

all: $(NAME)
	if ./$(NAME) > /dev/null 2>&1; then ./$(NAME) > $(PROGRAM_REQUIRE); fi

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $^ -o $@ -I$(INCS_DIR)

run:
ifneq ($($(shell ls | grep $(PROGRAM_REQUIRE) | wc -l)), 1)
	./$(PROGRAM_NAME)
else
	@echo "$(RED)faild to run: file named $(PROGRAM_REQUIRE) does not exist$(RESET)"
endif

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(PROGRAM_REQUIRE)

re: fclean all

.PHONY: all clean fclean re
