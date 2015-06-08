#include "Spider.hpp"

Spider::Spider(std::string url)
{
  this->url = url;
  this->spider.Initialize(this->url.c_str());
}

void Spider::CrawlDomain()
{
  std::string str = "http://";
  str += this->url;
  this->spider.AddUnspidered(str.c_str());
  bool success;
  while ((success = this->spider.CrawlNext()) && this->spider.get_NumUnspidered())
    {
      std::cout << this->spider.lastUrl() << std::endl;
      std::cout << "\t title : \t" << this->spider.lastHtmlTitle() << std::endl;
      std::cout << "\t description :\t" << this->spider.lastHtmlDescription() << std::endl;
      std::cout << "\t mots cles :\t" << this->spider.lastHtmlKeywords() << std::endl;
      std::cout << std::endl;
      this->spider.CrawlNext();      

    }
}
