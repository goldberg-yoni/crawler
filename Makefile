NAME = spider

CC = g++
CFLAGS = -W -Wall -Wextra -static
INCLUDES = -I./include
LIBS = -L./lib/ -lchilkat-9.5.0
LDFLAGS = $(LIBS)
OBJ = main.o Spider.o

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm *.o

re: clean $(NAME)
