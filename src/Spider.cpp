#include	<string>
#include	<iostream>

#include	<CkString.h>
#include	<CkSpider.h>

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

int &				Spider::getThsPrint( void )
{
	return (this->thsPrint);
}

void				Spider::crawlDomain( void )
{
	std::ostream &	inf = *(this->getLoger(INFO));
	std::ostream &	rdt = *(this->getLoger(RAWDATA));
	std::string		domain = ("http://"+ this->s_crawlURL);
	
	inf << "Crawling at: " << domain << std::endl;
	
	this->spider.AddUnspidered(domain.c_str());
	bool success;
	while ((success = this->spider.CrawlNext()) && this->spider.get_NumUnspidered())
	{
		if (IS(thsPrint, EXPRESSION))
			;
		else
		{
			//~ if (HAS(thsPrint, ERRORHTML))
				//~ rdt << this->spider.lastErrorHTML() << std::endl;
			if (HAS(thsPrint, ERRORTEXT))
				rdt << this->spider.lastErrorText() << std::endl;
			if (HAS(thsPrint, ERRORXML))
				rdt << this->spider.lastErrorXml() << std::endl;
			if (HAS(thsPrint, HTML))
				rdt << this->spider.lastHtml() << std::endl;
			if (HAS(thsPrint, HTMLDESCRIPTION))
				rdt << this->spider.lastHtmlDescription() << std::endl;
			if (HAS(thsPrint, HTMLKEYWORDS))
				rdt << this->spider.lastHtmlKeywords() << std::endl;
			if (HAS(thsPrint, HTMLTITLE))
				rdt << this->spider.lastHtmlTitle() << std::endl;
			if (HAS(thsPrint, MODDATESTR))
				rdt << this->spider.lastModDateStr() << std::endl;
			if (HAS(thsPrint, URL))
				rdt << this->spider.lastUrl() << std::endl;
		}
		rdt << std::endl;
		
		this->spider.CrawlNext();
	}
}
