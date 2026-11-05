NAME := ClapTrap

CXX := c++
CXXFragS := -Wall -Wextra -Werror -std=c++98

HEADERS :=	ClapTrap.hpp

OBJS_FOLDER := objs/
SRCS := main.cpp \
		ClapTrap.cpp

# OBJS := $(SRCS:.cpp=.o)
OBJS := $(patsubst %.cpp, $(OBJS_FOLDER)%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFragS) $(OBJS) -o $@

$(OBJS_FOLDER):
	mkdir -p $(OBJS_FOLDER)

$(OBJS_FOLDER)%.o: %.cpp | $(OBJS_FOLDER)
	$(CXX) $(CXXFragS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
