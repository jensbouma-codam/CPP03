# Program variables
NAME		= bin/ex01
FILES		= ClapTrap.cpp \
		 	  ScavTrap.cpp \
		      main.cpp
INC_DIR		= -I include
# Compilation variables
SRC_DIR		= src
BUILD_DIR	= build
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= $(addprefix $(SRC_DIR)/, $(FILES))
OBJECTS		= $(SRC:%.cpp=$(BUILD_DIR)/%.o)
HEADERS		= include/ClapTrap.hpp	\
			  include/ScavTrap.hpp

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(LIBS) $(INC_DIR) -o $@ $^ && echo "Compilation of $@ successful"

$(BUILD_DIR)/%.o:%.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@printf "%-25.25s%s\n" "Build" "$(notdir $<)"
	@$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@ 

debug: CFLAGS += -g
debug: re

clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -rf $(dir $(NAME))

re: fclean all

.PHONY: all clean fclean re
