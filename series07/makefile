CC = gcc
DEFS = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_POSIX_C_SOURCE=200809L
CFLAGS = -Wall -g -std=c99 -pedantic $(DEFS)

.PHONY: all clean
all: diff quicksort trapezoidal bisection datum matrix

diff: diff.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
quicksort: quicksort.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
trapezoidal: trapezoidal.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
bisection: bisection.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
datum: datum.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	

matrix: matrix.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
	
datum.o: datum.c datum.h 
	$(CC) $(CFLAGS) -c -o datum.o datum.c  
	
matrix.o: matrix.c matrix.h 
	$(CC) $(CFLAGS) -c -o matrix.o matrix.c  	


clean:
	rm -rf *.o diff quicksort trapezoidal bisection datum matrix
