NAME = spider

BINF = ./bin
SRCF = ./src
OBJF = ./obj


CC = g++
CFLAGS =	-W -Wall -Wextra -static

LIBSI =		-I./lib/inc
LIBS =		-L./lib/ -lchilkat-9.5.0
LDFLAGS =	$(LIBS)

INCS =		-I./inc $(LIBSI)


OBJ =		$(OBJF)/main.o			\
			$(OBJF)/Spider.o

all: $(NAME)

obj/%.o: src/%.cpp
	@mkdir -p $(OBJF)
	$(CC) $(CFLAGS) $(INCS) -o $@ -c $<

$(NAME): $(OBJ)
	@mkdir -p $(BINF)
	$(CC) -o $(BINF)/$(NAME) $(OBJ) $(LDFLAGS)

clean:
	@rm -f *~
	@rm -rf $(BINF)/*~
	@rm -rf $(SRCF)/*~
	@rm -rf $(OBJF)/*~
fclean: clean
	@rm -rf $(OBJF)
	@rm -rf $(BINF)

re: fclean all

.PHONY: all $(NAME) clean fclean re
