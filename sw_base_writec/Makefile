CFLAGS=-O3 -std=c99
LIBRARIES=-lm
CC?=gcc
OBJS = sw_base.o 
all: plain check

debug: CFLAGS =-DDEBUG -g -Wall -Wextra -std=c99
debug: all
		
plain: $(OBJS)
	$(CC) sw_base-wrapper.c -o sw_base $(OBJS) $(CFLAGS) $(LIBRARIES)

check: $(OBJS)
	$(CC) sw_base-wrapper.c -o sw_base.check $(OBJS) $(CFLAGS) $(LIBRARIES) -DCHECKING

verify: $(OBJS) sw_base_verify.o
	$(CC) sw_base-wrapper.c -o sw_base.verify $(OBJS) sw_base_verify.o $(CFLAGS) $(LIBRARIES) -DVERIFY

verify-rand: $(OBJS) sw_base_verify.o
	$(CC) sw_base-wrapper.c -o sw_base.verify-rand $(OBJS) sw_base_verify.o $(CFLAGS) $(LIBRARIES) -DVERIFY -DRANDOM

sw_base.o : sw_base.c
	$(CC) sw_base.c -o sw_base.o $(CFLAGS) -c

sw_base_verify.o : sw_base_verify.c
	$(CC) sw_base_verify.c -o sw_base_verify.o $(CFLAGS) -c

clean:
	rm -f *.o sw_base sw_base.check sw_base.verify sw_base.verify-rand
