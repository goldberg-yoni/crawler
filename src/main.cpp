#include	<iostream>

#include	"Spider.hh"

int			main( int argc, char * * argv )
{
	for (int i = 1; i < argc; i++)
	{
		Spider *	spider = new Spider(argv[i]);
		
		spider->getLoger() = &(std::cout);
		spider->getLoger(Spider::INFO) = &(std::cout);
		spider->getLoger(Spider::RAWDATA) = &(std::cout);

		spider->crawlDomain();

		delete (spider);
	}

	return (0);
}
