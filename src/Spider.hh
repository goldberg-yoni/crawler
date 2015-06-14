#ifndef		__SPIDER_HPP__
# define	__SPIDER_HPP__
//~ # include	<unistd.h>
# include	<cstring>
# include	<string>
# include	<iostream>
# include	<CkString.h>
# include	<CkSpider.h>

class Spider
{
public:
  Spider(std::string url);
  void CrawlDomain();
  
private:
  std::string url;
  CkSpider spider;
};

#endif
