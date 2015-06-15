#include	<string>
#include	<iostream>

#include	<CkString.h>
#include	<CkSpider.h>

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
		rdt << this->spider.lastUrl() << std::endl;
		rdt << "\t title : \t" << this->spider.lastHtmlTitle() << std::endl;
		rdt << "\t description :\t" << this->spider.lastHtmlDescription() << std::endl;
		rdt << "\t mots cles :\t" << this->spider.lastHtmlKeywords() << std::endl;
		rdt << std::endl;
		this->spider.CrawlNext();
	}
}
