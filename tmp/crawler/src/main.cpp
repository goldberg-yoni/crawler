#include	<cstring>
#include	<cstdio>

#include	"xpath_static.h"

int						main( int argc, char * * argv )
{
	char *				expression = (argc > 1) ? argv[1] : NULL;
	int					i;
	
	if (expression == NULL)
		return (0);
	for (i = 2; i < argc; i++)
	{
		TiXmlDocument *	XDp_doc = new TiXmlDocument;
		TiXmlElement *	XEp_main;

		if (!(XDp_doc->LoadFile(argv[i])))
		{
			(void)fprintf(stdout, "Can't find %s !\n", argv[i]);
			
			return (99);
		}
		XEp_main = XDp_doc->RootElement();

		if (XEp_main == NULL)
			(void)fprintf(stderr, "The root element was not found.\n");
		else
			(void)fprintf(stdout, "%s\n", TinyXPath::S_xpath_string(static_cast<const TiXmlNode *>(XEp_main), expression).c_str());
	}
	
	return (0);
}
