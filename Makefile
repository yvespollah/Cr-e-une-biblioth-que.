# TPSysteme
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c


type.o : ./src/type.c
	$(CC) $(CFLAGS) ./src/type.c -o ./build/type.o

matrix.o : ./src/matrix.c
	$(CC) $(CFLAGS) ./src/matrix.c -o ./build/matrice.o


