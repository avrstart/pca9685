CC=gcc
CFLAGS=-Wall

all: servo

servo: servo_rotate.o pca.o
	$(CC) $(CFLAGS) -o servo servo_rotate.o pca.o

servo_rotate: servo_rotate.o
	$(CC) $(CFLAGS) -c -o servo_rotate servo_rotate.c

pca.o: ../pca9685.c
	$(CC) $(CFLAGS) -c -o pca.o ../pca9685.c

clean:
	rm -rf *.o