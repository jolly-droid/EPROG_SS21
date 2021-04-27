CC = gcc
DEFS = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_POSIX_C_SOURCE=200809L
CFLAGS = -Wall -g -std=c99 -pedantic $(DEFS)


all: sarrus pascal maxcompare energy zeitmessung square swap squareVec

sarrus: sarrus.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
pascal: pascal.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
maxcompare: maxcompare.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
energy: energy.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
zeitmessung: zeitmessung.o
	$(CC) $(LDFLAGS) -o $@ $^ -lm -pthread -lrt	
	
square: square.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
swap: swap.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
squareVec: squareVec.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o ssarrus pascal maxcompare energy zeitmessung square swap squareVec
