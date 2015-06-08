#include <iostream>
#include "Spider.hpp"

int main()
{
  Spider *spider = new Spider("www.topito.com");

  spider->CrawlDomain();
  return 0;
}
