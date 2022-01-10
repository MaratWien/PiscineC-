# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 18:05:27 by hfunctio          #+#    #+#              #
#    Updated: 2022/01/10 17:14:04 by hfunctio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = main.cpp

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
