#ifndef		__SPIDER_HPP__
# define	__SPIDER_HPP__

# include	<map>
# include	<iostream>

# include	<CkString.h>
# include	<CkSpider.h>

class											Spider
{
public:
	typedef enum								e_typeLog
	{
		UNDEFINED								= 0,
		ERROR									= 1 << 0,
		INFO									= 1 << 1,
		DEBUG									= 1 << 2,
		RAWDATA									= 1 << 3,
	}											typeLog;
	
private:
	std::string									s_crawlURL;
	CkSpider									spider;
	std::map< unsigned int, std::ostream * >	logers;
	
public:
	Spider( std::string _s_crawlURL );

public:
	std::ostream * &							getLoger( unsigned int type = UNDEFINED );

public:
	void										crawlDomain( void );
};

#endif
