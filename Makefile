CC=gcc
O_MAIN=main.o
O_MATH=basicMath.o power.o

all: mymaths mymathd mains maind
mains: $(O_MAIN) libmyMath.a
	$(CC) -Wall -o mains $(O_MAIN) libmyMath.a

maind: $(O_MAIN)
	$(CC) -Wall -o maind $(O_MAIN) ./libmyMath.so

mymaths: libmyMath.a

mymathd: libmyMath.so

libmyMath.a: $(O_MATH)
	ar rc libmyMath.a $(O_MATH)

libmyMath.so: $(O_MATH)
	$(CC) -Wall -fPIC -c basicMath.c power.c
	$(CC) -shared -o libmyMath.so $(O_MATH)

main.o: main.c myMath.h
	$(CC) -Wall -c main.c

basicMath.o: basicMath.c myMath.h
	$(CC) -Wall -c basicMath.c

power.o: power.c myMath.h
	$(CC) -Wall -c power.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mymaths mymathd maind mains

