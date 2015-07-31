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

std::deque< std::string * > *		Spider::crawlDomain( void )
{
	std::deque< std::string * > *	ret = new std::deque< std::string * >();
	std::ostream &					inf = *(this->getLoger(INFO));
	std::ostream &					err = *(this->getLoger(ERROR));
	std::string						domain = ("http://"+ this->s_crawlURL);
	
	inf << "Crawling at: " << domain << std::endl;
	
	/*this->spider.AddUnspidered(domain.c_str());*/
	if (this->spider.CrawlNext() && this->spider.get_NumUnspidered())
		for (std::deque< toPrint >::iterator it = this->thsPrint.begin(); it != this->thsPrint.end(); ++it)
			{
				switch (*it)
				{
					case (EXPRESSION):
						{
							std::string		expression = "*";
							TiXmlElement *	XEp_main = new TiXmlElement(this->spider.lastHtml());

							ret->push_back(new std::string(TinyXPath::S_xpath_string(static_cast<const TiXmlNode *>(XEp_main), expression.c_str()).c_str()));

							delete (XEp_main);
						};
						break;
					/*case (ERRORHTML):
						ret->push_back(new std::string(this->spider.lastErrorHTML()));
						break;*/
					case (ERRORTEXT):
						ret->push_back(new std::string(this->spider.lastErrorText()));
						break;
					case (ERRORXML):
						ret->push_back(new std::string(this->spider.lastErrorXml()));
						break;
					case (HTML):
						ret->push_back(new std::string(this->spider.lastHtml()));
						break;
					case (HTMLDESCRIPTION):
						ret->push_back(new std::string(this->spider.lastHtmlDescription()));
						break;
					case (HTMLKEYWORDS):
						ret->push_back(new std::string(this->spider.lastHtmlKeywords()));
						break;
					case (HTMLTITLE):
						ret->push_back(new std::string(this->spider.lastHtmlTitle()));
						break;
					case (MODDATESTR):
						ret->push_back(new std::string(this->spider.lastModDateStr()));
						break;
					case (URL):
						ret->push_back(new std::string(this->spider.lastUrl()));
						break;
				}
			}

	return (ret);
}
