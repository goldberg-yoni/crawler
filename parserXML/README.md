# Spider Crawler (parserXML BETA)

The parserXML aim to extract the XPath expressed part of an XML file.

## To build
```bash
    make
```
## To clean the project repository
```bash
    make fclean
```
## To run the project
```bash
    ./bin/parseXML [-f] "expression;..." [files | -]...
```
> The "expression" here is an XPath selector that is used to extract the wanted value in the XML document. The expressions are seperated with a ";".

> parserXML can read one or more files.

- `-f` : This option means that parserXML is not interpreting the input as lines to treat and examine as XML, but as list of file name to examine.
- `-` : This option means that parserXML is now reading in the stdin instead of reading files argument given.

## Special
### To build for MinGW
```bash
	make OPTLD=WIN32
```