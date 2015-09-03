NAME =			parserXML

BINF =			./bin
SRCF =			./src
OBJF =			./obj


CC =			g++
CFLAGS =
__CFLAGS =		-W -Wall -Wextra -static $(CFLAGS)


TINYXML =		tinyXML

WIN32 =			-Wl,--enable-auto-import
AMENDLD_WIN32 =	-L/MinGW/lib -lcrypt32 -lws2_32 -ldnsapi -dll-search-prefix=lib

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)


LIBSI =			-I./lib/inc
LIBS =			-L./lib/bin -l$(TINYXML) $(AMENDLD_$(__OPTLD))
LDFLAGS =		$(LIBS)

INCS =			-I./inc $(LIBSI)


OBJ =			$(OBJF)/main.o			\
				$(OBJF)/parserXML.o

all:			$(NAME)

WIN32:
	@cp ./lib/bin/lib$(TINYXML).a $(BINF)/

preope:
	@mkdir -p $(BINF)

	@$(MAKE) -C ./lib/balls/TinyXML/ all __CFLAGS=-static
	@cp ./lib/balls/TinyXML/bin/lib$(TINYXML).a $(BINF)

stdrule:		preope
	@$(MAKE) $(__OPTLD) compile

$(OBJF)/%.o:	src/%.cpp
	@mkdir -p $(OBJF)
	$(CC) $(__CFLAGS) $(INCS) -o $@ -c $<

$(NAME):		stdrule

compile:		$(OBJ)
	$(CC) $($(__OPTLD)) -o $(BINF)/$(NAME) $(OBJ) $(LDFLAGS)

clean:
	@rm -f *~
	@rm -rf $(BINF)/*~
	@rm -rf $(SRCF)/*~
	@rm -rf $(OBJF)/*~
fclean:
	@$(MAKE) -C ./lib/balls/TinyXML/ fclean
	@rm -rf $(OBJF)
	@rm -rf $(BINF)

re:				fclean all

.PHONY:			all WIN32 stdrule preope $(NAME) compile clean fclean re
