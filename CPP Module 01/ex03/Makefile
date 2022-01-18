# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 19823296 <19823296@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 18:05:27 by hfunctio          #+#    #+#              #
#    Updated: 2022/01/17 10:48:08 by 19823296         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HDRS = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS_DIR = Objects

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)

GREEN = \033[0;32m
RESET = \033[0m

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) Makefile
	@$(CC) $(OBJS) -o $@
	@echo "$(GREEN) objects were created $(RESET)"
	@echo "$(GREEN) $(NAME) - [ok] $(RESET)"

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(GREEN) objects were deleted $(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN) objects and $(NAME) were deleted $(RESET)"

re: fclean all

.PHONY: all, clean, fclean, re
