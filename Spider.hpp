#ifndef __SPIDER_HPP__
#define __SPIDER_HPP__
#include <cstring>
#include <string>
#include <CkString.h>
#include <iostream>
#include <CkSpider.h>
#include <unistd.h>

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
