# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:51:23 by aibn-che          #+#    #+#              #
#    Updated: 2024/10/03 09:49:16 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSRCS = ./ClapTrap.cpp ./ScavTrap.cpp ./main.cpp ./FragTrap.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

CFLAGS =  -Wall -Wextra -Werror -std=c++98

NAME = ScavTrap

all : $(NAME)

%.o:%.cpp $(HEADER)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)