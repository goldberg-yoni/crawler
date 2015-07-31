#include	<deque>
#include	<iostream>

#include	"Spider.hh"

int											main( int argc, char * * argv )
{
	for (int i = 1; i < argc; i++)
	{
		Spider *							spider = new Spider(argv[i]);
		
		spider->getLoger() = &(std::cout);
		spider->getLoger(Spider::INFO) = &(std::cout);
		spider->getLoger(Spider::DEBUG) = &(std::cout);
		spider->getLoger(Spider::ERROR) = &(std::cerr);
		
		spider->addThsPrint(Spider::EXPRESSION);

		{
			std::deque< std::string * > *	extract = spider->crawlDomain();

			for (std::deque< std::string * >::iterator it = extract->begin(); it != extract->end(); ++it)
			{
				std::cout << *it << std::endl;
				delete (*it);
			};
			delete (extract);
		};

		delete (spider);
	}

	return (0);
}
