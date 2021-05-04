CC = gcc
DEFS = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_POSIX_C_SOURCE=200809L
CFLAGS = -Wall -g -std=c99 -pedantic $(DEFS)

.PHONY: all clean
all: minmaxmean mathvec cut merge bubblesort anagram roman mergesort 

minmaxmean: minmaxmean.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
mathvec: mathvec.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
	
cut: cut.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt
	
merge: merge.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
bubblesort: bubblesort.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
anagram: anagram.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	
	
roman: roman.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	

mergeSort: mergesort.o
	$(CC) $(LDFLAGS) -o $@ $^ -pthread -lrt	

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
	
mathvec.o: mathvec.c mathvec.h 
	$(CC) $(CFLAGS) -c -o mathvec.o mathvec.c  
	#linking step1 	


clean:
	rm -rf *.o minmaxmean mathvec cut merge bubblesort anagram roman mergesort 
