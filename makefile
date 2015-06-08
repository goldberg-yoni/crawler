CC = g++
CFLAGS = -Wall -static
EXEC_NAME = spider
INCLUDES = -I./include
LIBS = -L./lib/ -lchilkat-9.5.0
OBJ_FILES = main.o Spider.o
INSTALL_DIR = /usr/bin

all : $(EXEC_NAME)

clean :
	rm *.o

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

re : clean $(EXEC_NAME)
