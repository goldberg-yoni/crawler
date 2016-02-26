#include	<cstdlib>
#include	<cstdio>
#include	<getopt.h>
#include	"parserXML.hh"

int							main(int argc, char **argv)
{
	int						c;
	int						option_index = 0;
	static struct option	long_options[] =
	{
		{"file",	no_argument,		0,	'f'},
		{0,			0,					0,	0}
	};
	char *					expression = NULL;
	int						expression_index,
							fileDone_index;

	opterr = 0;

	while ((c = getopt_long(argc, argv, "f", long_options, &option_index)) != -1)
	{
		switch (c)
		{
			case 0:
				printf("0 %s\n", argv[optind]);
				break;
			case 'f':
				printf("option f\n");
				break;
			case '?':
				if (expression == NULL)
				{
					expression = argv[optind];
					expression_index = optind;
				}
				else if (expression_index != optind && fileDone_index != optind)
				{
					fileDone_index = optind;
					parserXML(expression, argv[optind]);
				}
				break;
			default:
				printf("?? getopt returned character code 0%o ??\n", c);
		}
	}
	if (expression == NULL)
		expression = (optind < argc) ? argv[optind++] : NULL;
	if (expression == NULL)
		return (EXIT_SUCCESS);
	while (optind < argc)
		if (fileDone_index != optind)
		{
			fileDone_index = optind;
			parserXML(expression, argv[optind++]);
		}
		else
			optind++;

	return (EXIT_SUCCESS);
}