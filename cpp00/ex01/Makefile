NAME = Phonebook

FILES = Phonebook.cpp\
		Contact.cpp\
		main.cpp\

CC = c++ -Wall -Wextra -Werror 

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) :  $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all