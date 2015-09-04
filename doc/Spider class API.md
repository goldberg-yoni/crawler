# Spider class API

## Determine on which stream Spider has to print to depending on the type information to print.
### UNDEFINED
Spider never will print on this one.
### ERROR
All Spider's error will be printed on this stream (by default stderr).
### INFO
Various informations about the process (targeted to human reader).
### DEBUG
All Debug informations, which should be empty on stable version.
### RAWDATA
The data information which the Spider is crawling for.

## Determine what to print on the RAWDATA stream.
Will be printed/tested in the following order. Note that if Spider::EXPRESSION is set none of the others will be tested.
You can set both the separator between the elements bellow (by default an endline) and the separator between the block elements (by default an extra endline).
### EXPRESSION
Will print the elements Can't be assiociated with other elements to print.
### NOTHING
Will not enter in any condition to print something.
### ERRORHTML
### ERRORTEXT
### ERRORXML
### HTML
### HTMLDESCRIPTION
Will print the description of the page (meta)
### HTMLKEYWORDS
Will print the keywords of the page (meta)
### HTMLTITLE
Will print the title of the page (head)
### MODDATESTR
### URL
Will print the current url for the previous informations.