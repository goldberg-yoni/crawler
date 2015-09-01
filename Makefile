NAME =			spider

BINF =			./bin
SRCF =			./src
OBJF =			./obj


CC = g++
CFLAGS =		-W -Wall -Wextra -static


CHILKAT =		chilkat-9.5.0
TINYXML =		tinyXML

WIN32 =			-Wl,--enable-auto-import
AMENDLD_WIN32 =	-L/MinGW/lib -lcrypt32 -lws2_32 -ldnsapi -dll-search-prefix=lib

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)


LIBSI =			-I./lib/inc
LIBS =			$(AMENDLD_$(__OPTLD)) -L./lib/bin/$(OPTLD) -L./lib/bin/ -l$(CHILKAT) -l$(TINYXML)
LDFLAGS =		$(LIBS)

INCS =			-I./inc $(LIBSI)


OBJ =			$(OBJF)/main.o			\
				$(OBJF)/Spider.o

all:			$(NAME)

WIN32:
	cp ./lib/bin/$(OPTLD)/lib$(CHILKAT).dll ./bin/

stdrule:
	@mkdir -p $(BINF)

	@$(MAKE) -C ./lib/balls/TinyXML/ all __CFLAGS=-static
	@cp ./lib/balls/TinyXML/bin/libtinyXML.a $(BINF)

preope:			stdrule
	@$(MAKE) $(__OPTLD) compile

$(OBJF)/%.o:	$(SRCF)/%.cpp
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
	@$(MAKE) -C ./lib/balls/TinyXML/ fclean

	@rm -rf $(OBJF)
	@rm -rf $(BINF)

re:				fclean all

.PHONY:			all WIN32 stdrule preope $(NAME) compile clean fclean re
