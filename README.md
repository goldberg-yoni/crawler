# Spider Crawler

Spider Crawler is a couple of program makes you able to crawl a web domain and harvest the XPath expressed datas.

## To build
```
    make all
```
## To clean the project repository
```
    make fclean
```
## To run the project (BETA)
```
    ./bin/spider -f FAV_URLs | ./bin/parserXML 'expression;...' -f -p'echo "\n"' -
```
## Special
### To build for MinGW (temporarly unavailable)
```
	make OPTLD=WIN32
```

## Thanks to
This program is made with:
- TinyXPath (1.3.1)
- Chilkat (9.5.0)