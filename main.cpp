#include <iostream>
#include "Spider.hh"

int			main( int argc, char * * argv )
{
	for (int i = 0; i < argc; i++)
	{
		std::cout << "Crawling at: " << argv[i] << std::endl;
		
		Spider *	spider = new Spider(argv[i]);

		spider->CrawlDomain();
		
		delete (spider);
	}
	
	return (0);
}
