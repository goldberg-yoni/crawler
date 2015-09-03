#include	<cstdlib>
#include	"parserXML.hh"

int						main( int argc, char * * argv )
{
	char *				expression = (argc > 1) ? argv[1] : NULL;
	int					i;
	
	if (expression == NULL)
		return (0);
	for (i = 2; i < argc; i++)
		parserXML(expression, argv[i]);
	
	return (0);
}
