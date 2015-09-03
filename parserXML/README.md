# Spider Crawler (parserXML)

The parserXML aim to extract the XPath expressed part of an XML file.

## To build
```
    make
```
## To clean the project repository
```
    make fclean
```
## To run the project
```
    ./bin/parseXML "expression;..." [files | -]...
```
## Special
### To build for MinGW
```
	make OPTLD=WIN32
```