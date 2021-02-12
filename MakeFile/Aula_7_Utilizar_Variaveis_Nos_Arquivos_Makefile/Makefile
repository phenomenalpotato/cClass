SRC = ./fontes
OBJ = ./obj
BIN = ./bin
MOD = ./mod
CC = gcc

$(BIN)/programa:	$(SRC)/programa.c $(OBJ)/modulo_lib.o
	$(CC) $(OBJ)/modulo_lib.o $(SRC)/programa.c -o $(BIN)/programa

$(OBJ)/modulo_lib.o:	$(SRC)/modulo_lib.c
	$(CC) -c $(SRC)/modulo_lib.c -o $(OBJ)/modulo_lib.o

clean:
	rm $(OBJ)/*.o
	rm $(MOD)/*mod