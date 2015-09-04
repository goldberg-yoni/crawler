#include	<deque>
#include	<iostream>

#include	"Spider.hh"

int											main( int argc, char * * argv )
{
	char *									expr = argv[1];
	
	for (int i = 2; i < argc; i++)
	{
		Spider *							spider = new Spider(argv[i]);
		
		spider->getLoger() = &(std::cout);
		spider->getLoger(Spider::INFO) = &(std::cout);
		spider->getLoger(Spider::DEBUG) = &(std::cout);
		
		spider->addThsPrint(Spider::HTML);
		
		spider->crawlDomain();

		delete (spider);
	}

	return (0);
}
