#include	<string>
#include	<deque>
#include	<map>
#include	<iostream>

#include	<Chilkat/CkString.h>
#include	<Chilkat/CkSpider.h>
#include	<TinyXPath/xpath_static.h>

#include	"utils.h"

#include	"Spider.hh"

Spider::Spider( std::string _s_crawlURL )
	:s_crawlURL(_s_crawlURL)
{
	this->spider.Initialize(this->s_crawlURL.c_str());
}

std::ostream * &	Spider::getLoger( unsigned int type )
{
	return (this->logers[type]);
}

Spider *			Spider::addThsPrint( toPrint ask )
{
	this->thsPrint.push_back(ask);

	return (this);
}

Spider *			Spider::setExpr( std::string const _expr )
{
	this->expr = _expr;
}

void								Spider::crawlDomain( void )
{
	std::ostream &					inf = *(this->getLoger(INFO));
	std::ostream &					err = *(this->getLoger(ERROR));
	std::string						domain = ("http://"+ this->s_crawlURL);
	
	inf << "Crawling at: " << domain << std::endl;
	
	this->spider.AddUnspidered(domain.c_str());
	do
	{
		std::deque< std::string * > *	extract = new std::deque< std::string * >();
		
		for (std::deque< toPrint >::iterator it = this->thsPrint.begin(); it != this->thsPrint.end(); ++it)
		{
			switch (*it)
			{
				case (EXPRESSION):
					{
						TiXmlElement *	XEp_main = new TiXmlElement(this->spider.lastHtml());
						std::string *	result = new std::string(TinyXPath::S_xpath_string(static_cast<const TiXmlNode *>(XEp_main), expr.c_str()).c_str());
						std::cout << *result << std::endl;
						extract->push_back(result);
						
						delete (XEp_main);
					};
					break;
				/*case (ERRORHTML):
					ret->push_back(new std::string(this->spider.lastErrorHTML()));
					break;*/
				case (ERRORTEXT):
					extract->push_back(new std::string(this->spider.lastErrorText()));
					break;
				case (ERRORXML):
					extract->push_back(new std::string(this->spider.lastErrorXml()));
					break;
				case (HTML):
					extract->push_back(new std::string(this->spider.lastHtml()));
					break;
				case (HTMLDESCRIPTION):
					extract->push_back(new std::string(this->spider.lastHtmlDescription()));
					break;
				case (HTMLKEYWORDS):
					extract->push_back(new std::string(this->spider.lastHtmlKeywords()));
					break;
				case (HTMLTITLE):
					extract->push_back(new std::string(this->spider.lastHtmlTitle()));
					break;
				case (MODDATESTR):
					extract->push_back(new std::string(this->spider.lastModDateStr()));
					break;
				case (URL):
					extract->push_back(new std::string(this->spider.lastUrl()));
					break;
			}
		}
		for (std::deque< std::string * >::iterator it = extract->begin(); it != extract->end(); ++it)
		{
			std::cout << **it << std::endl;
			
			delete (*it);
		};
		delete (extract);
	}
	while (this->spider.CrawlNext() && this->spider.get_NumUnspidered());
}
