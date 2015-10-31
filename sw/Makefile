CFLAGS=-O3 -std=c99
LIBRARIES=-lm
CC?=gcc
OBJS = sw.o sw_base.o external_functions.o
all: plain check

debug: CFLAGS =-DDEBUG -g -Wall -Wextra -std=c99
debug: all
		
plain: $(OBJS)
	$(CC) sw-wrapper.c -o sw $(OBJS) $(CFLAGS) $(LIBRARIES)

check: $(OBJS)
	$(CC) sw-wrapper.c -o sw.check $(OBJS) $(CFLAGS) $(LIBRARIES) -DCHECKING

verify: $(OBJS) sw_verify.o
	$(CC) sw-wrapper.c -o sw.verify $(OBJS) sw_verify.o $(CFLAGS) $(LIBRARIES) -DVERIFY

verify-rand: $(OBJS) sw_verify.o
	$(CC) sw-wrapper.c -o sw.verify-rand $(OBJS) sw_verify.o $(CFLAGS) $(LIBRARIES) -DVERIFY -DRANDOM

sw.o : sw.c
	$(CC) sw.c -o sw.o $(CFLAGS) -c

%.o : %.c
	$(CC) $< -o $@ $(CFLAGS) -c

sw_base.o : sw_base.c
	$(CC) sw_base.c -o sw_base.o $(CFLAGS) -c

sw_verify.o : sw_verify.c
	$(CC) sw_verify.c -o sw_verify.o $(CFLAGS) -c

clean:
	rm -f *.o sw sw.check sw.verify sw.verify-rand
