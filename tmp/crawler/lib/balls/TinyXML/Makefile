NAME =			tinyXML
BINNAME =		lib$(NAME).a

BINF =			./bin
SRCF =			./src
OBJF =			./obj


CC =			g++
CFLAGS =
__CFLAGS =		-W -Wall -Wextra -static $(CFLAGS)

WIN32 =			-Wl,--enable-auto-import
AMENDLD_WIN32 =	-L/MinGW/lib -lcrypt32 -lws2_32 -ldnsapi

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)


LIBSI =			-I./lib/inc
LIBS =			-L./lib/bin $(AMENDLD_$(__OPTLD))
LDFLAGS =		$(LIBS)

INCS =			-I./inc $(LIBSI)						\
				-I./inc/TinyXML							\
				-I./inc/TinyXPath


OBJ =			$(OBJF)/TinyXML/tinystr.o				\
				$(OBJF)/TinyXML/tinyxml.o				\
				$(OBJF)/TinyXML/tinyxmlerror.o			\
				$(OBJF)/TinyXML/tinyxmlparser.o			\
				$(OBJF)/TinyXPath/action_store.o		\
				$(OBJF)/TinyXPath/lex_util.o			\
				$(OBJF)/TinyXPath/node_set.o			\
				$(OBJF)/TinyXPath/tokenlist.o			\
				$(OBJF)/TinyXPath/xml_util.o			\
				$(OBJF)/TinyXPath/xpath_expression.o	\
				$(OBJF)/TinyXPath/xpath_processor.o		\
				$(OBJF)/TinyXPath/xpath_stack.o			\
				$(OBJF)/TinyXPath/xpath_static.o		\
				$(OBJF)/TinyXPath/xpath_stream.o		\
				$(OBJF)/TinyXPath/xpath_syntax.o

all:			$(NAME)

$(OBJF)/%.o:	src/%.cpp
	@mkdir -p $(OBJF)
	@mkdir -p $(OBJF)/TinyXML
	@mkdir -p $(OBJF)/TinyXPath
	$(CC) $(__CFLAGS) $(INCS) -o $@ -c $<

$(NAME):		$(OBJ)
	@mkdir -p $(BINF)
	ar rcs $(BINF)/$(BINNAME) $(OBJ)
	# $(CC) $($(__OPTLD)) -o $(BINF)/$(NAME) $(OBJ) $(LDFLAGS)

	@cp $(BINF)/$(BINNAME) ../../bin/

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
