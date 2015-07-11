NAME =			spider

BINF =			./bin
SRCF =			./src
OBJF =			./obj


CC = g++
CFLAGS =
__CFLAGS =		-W -Wall -Wextra -static $(CFLAGS)


CHILKAT =		chilkat-9.5.0

WIN32 =			-Wl,--enable-auto-import
AMENDLD_WIN32 =	-L/MinGW/lib -lcrypt32 -lws2_32 -ldnsapi -dll-search-prefix=lib

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)


LIBSI =			-I./lib/inc
LIBS =			$(AMENDLD_$(__OPTLD)) -L./lib/bin/$(OPTLD) -l$(CHILKAT)
LDFLAGS =		$(LIBS)

INCS =			-I./inc $(LIBSI)


OBJ =			$(OBJF)/main.o			\
				$(OBJF)/Spider.o

all:			$(NAME)

WIN32:
	cp ./lib/bin/$(OPTLD)/lib$(CHILKAT).dll ./bin/

stdrule:
	@mkdir -p $(BINF)
	@$(MAKE) $(__OPTLD) compile

preope:			stdrule

$(OBJF)/%.o:	src/%.cpp
	@mkdir -p $(OBJF)
	$(CC) $(CFLAGS) $(INCS) -o $@ -c $<

$(NAME):		preope

compile:		$(OBJ)
	$(CC) $($(__OPTLD)) -o $(BINF)/$(NAME) $(OBJ) $(LDFLAGS)

clean:
	@rm -f *~
	@rm -rf $(BINF)/*~
	@rm -rf $(SRCF)/*~
	@rm -rf $(OBJF)/*~
fclean:		clean
	@rm -rf $(OBJF)
	@rm -rf $(BINF)

re:				fclean all

.PHONY:			all $(NAME) clean fclean re
