NAME =			crawler

BINF =			./bin/

AMENDLD_ =
OPTLD =
__OPTLD =		$(OPTLD)

all:			$(NAME)
	@$(MAKE) -C ./parserXML $(__OPTLD) $@
	@$(MAKE) -C ./spider $(__OPTLD) $@

$(NAME):

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