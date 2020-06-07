CC = gcc
CFLAGS = -g -Wall -O

SOURCES = $(wildcard *.c)

OBJECT = $(patsubst %c, %o, $(SOURCES))

TARGET = main

$(TARGET): $(OBJECT)
	$(CC) $(OBJECT) -o main

#%.o: %.cpp
$(OBJECT): $(SOURCES)
	$(CC) $(CFLAGS) -c $^

.PHONY : clean

clean :
	rm $(TARGET) $(OBJECT)
