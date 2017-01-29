CC=gcc
CFLAGS=-lm -Wall
TUT=T03
QNS=3a 3b

all: $(QNS)
	echo All made!

%:
	$(CC) $(CFLAGS) $(TUT)_Q$@.c -o _run$@

clean:
	rm _run*