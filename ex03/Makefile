NAME := DiamondTrap

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS :=	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp \
			DiamondTrap.hpp

OBJS_FOLDER := objs/
SRCS := main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

# OBJS := $(SRCS:.cpp=.o)
OBJS := $(patsubst %.cpp, $(OBJS_FOLDER)%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS_FOLDER):
	mkdir -p $(OBJS_FOLDER)

$(OBJS_FOLDER)%.o: %.cpp | $(OBJS_FOLDER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
