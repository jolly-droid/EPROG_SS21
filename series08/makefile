CC = gcc
DEFS = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_POSIX_C_SOURCE=200809L
CFLAGS = -Wall -g -std=c99 -pedantic $(DEFS)

.PHONY: all clean
all: squarematrix polynomial dec2bin dec2float float2dec

squarematrix: squarematrix.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	

polynomial: polynomial.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
dec2bin: dec2bin.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
dec2float: dec2float.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt		
	
float2dec: float2dec.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt			
	
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
	
squarematrix.o: squarematrix.c squarematrix.h 
	$(CC) $(CFLAGS) -c -o squarematrix.o squarematrix.c		
	
clean:
	rm -rf *.o squarematrix	polynomial dec2bin dec2float float2dec

