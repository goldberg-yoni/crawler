#pragma		once

#ifndef		__SPIDER_HPP__
# define	__SPIDER_HPP__

# include	<deque>
# include	<map>
# include	<iostream>

# include	<Chilkat/CkString.h>
# include	<Chilkat/CkSpider.h>

class											Spider
{
public:
	typedef enum								e_typeLog
	{
		UNDEFINED								= 0,
		ERROR									= 1 << 0,
		INFO									= 1 << 1,
		DEBUG									= 1 << 2,
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
	std::deque< toPrint >						thsPrint;
	
public:
	Spider( std::string _s_crawlURL );

public:
	std::ostream * &							getLoger( unsigned int type = UNDEFINED );
	Spider *									addThsPrint( toPrint ask );

public:
	std::deque< std::string * > *				crawlDomain( void );
};

#endif
