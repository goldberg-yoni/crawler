#include	<cstdio>
#include	<string>
#include	"xpath_static.h"

#include	"parserXML.hh"

int			parserXML( char const * const expression, char const * const filename )
{
	TiXmlDocument *	XDp_doc = new TiXmlDocument;
	TiXmlElement *	XEp_main;

	if (!(XDp_doc->LoadFile(filename)))
	{
		(void)fprintf(stdout, "Can't find %s !\n", filename);
		
		return (99);
	}
	XEp_main = XDp_doc->RootElement();

	if (XEp_main == NULL)
		(void)fprintf(stderr, "The root element was not found.\n");
	else
		(void)fprintf(stdout, "%s\n", TinyXPath::S_xpath_string(static_cast<const TiXmlNode *>(XEp_main), expression).c_str());

	return (0);
}