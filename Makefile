NAME =			crawler

parserXML =		./parserXML
spider =		./spider

BINF =			./bin

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)

all:			$(NAME)
	mkdir -p $(BINF)
	@cp $(parserXML)/$(BINF)/* $(spider)/$(BINF)/* $(BINF)

$(NAME):
	@$(MAKE) -C ./parserXML OPTLD=$(__OPTLD) $(parserXML)
	@$(MAKE) -C ./spider OPTLD=$(__OPTLD) $(spider)

clean:
	@$(MAKE) -C ./parserXML $@
	@$(MAKE) -C ./spider $@

	@$(RM) *~
	@$(RM) -r $(BINF)/*~
fclean:
	@$(MAKE) -C ./parserXML $@
	@$(MAKE) -C ./spider $@

	@$(RM) -r $(BINF)

re:				fclean all

.PHONY:			all WIN32 stdrule preope $(NAME) compile clean fclean re