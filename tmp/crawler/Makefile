NAME =			tiny

BINF =			./bin
SRCF =			./src
OBJF =			./obj


CC =			g++
CFLAGS =
__CFLAGS =		-W -Wall -Wextra -static $(CFLAGS)


TINYXML =		tinyXML

WIN32 =			-Wl,--enable-auto-import
AMENDLD_WIN32 =	-L/MinGW/lib -lcrypt32 -lws2_32 -ldnsapi

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)


LIBSI =			-I./lib/inc
LIBS =			-L./lib/bin -l$(TINYXML) $(AMENDLD_$(__OPTLD))
LDFLAGS =		$(LIBS)

INCS =			-I./inc $(LIBSI)


OBJ =			$(OBJF)/main.o

all:			$(NAME)

WIN32:
	cp ./lib/bin/$(TINYXML).dll $(BINF)/

stdrule:
	@mkdir -p $(BINF)

	@$(MAKE) -C ./lib/balls/TinyXML/ all __CFLAGS=-static
	@cp ./lib/balls/TinyXML/bin/libtinyXML.a $(BINF)

preope:			stdrule
	@$(MAKE) $(__OPTLD) compile

$(OBJF)/%.o:	src/%.cpp
	@mkdir -p $(OBJF)
	$(CC) $(__CFLAGS) $(INCS) -o $@ -c $<

$(NAME):		preope

compile:		$(OBJ)
	$(CC) $($(__OPTLD)) -o $(BINF)/$(NAME) $(OBJ) $(LDFLAGS)

clean:
	@rm -f *~
	@rm -rf $(BINF)/*~
	@rm -rf $(SRCF)/*~
	@rm -rf $(OBJF)/*~
fclean:		clean
	@$(MAKE) -C ./lib/balls/TinyXML/ fclean __CFLAGS=-static
	@rm -rf $(OBJF)
	@rm -rf $(BINF)

re:				fclean all

.PHONY:			all WIN32 stdrule preope $(NAME) compile clean fclean re
