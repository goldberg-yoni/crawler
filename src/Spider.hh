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
	typedef enum								e_toPrint
	{
		EXPRESSION								= -1,
		NOTHING									= 0,
		ERRORHTML								= 1 << 0,
		ERRORTEXT								= 1 << 1,
		ERRORXML								= 1 << 2,
		HTML									= 1 << 3,
		HTMLDESCRIPTION							= 1 << 4,
		HTMLKEYWORDS							= 1 << 5,
		HTMLTITLE								= 1 << 6,
		MODDATESTR								= 1 << 7,
		URL										= 1 << 8,
	}											toPrint;
	
private:
	std::string									s_crawlURL;
	CkSpider									spider;
	std::map< unsigned int, std::ostream * >	logers;
	int											thsPrint;
	
public:
	Spider( std::string _s_crawlURL );

public:
	std::ostream * &							getLoger( unsigned int type = UNDEFINED );
	int &										getThsPrint( void );

public:
	void										crawlDomain( void );
};

#endif
