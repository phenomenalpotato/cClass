SRC= ./src

OBJ= ./obj

BIN= ./bin

MOD= ./mod

CC= gfortran

${BIN}/programa.x:	${SRC}/programa.f90 ${OBJ}/modulo_lib.o
	${CC} ${OBJ}/modulo_lib.o $< -I ${MOD} -o $@

	#gfortran ${OBJ}/modulo_lib.o ${SRC}/programa.f90 -I $(MOD) -o ${BIN}/programa.x

${OBJ}/%.o:	${SRC}/%.f90
	${CC} -c $< -J ${MOD} -o $@

# ./obj/modulo_lib.o:	./src/modulo_lib.f90
	# gfortran -c ./src/modulo_lib.f90 -J ./mod -o ./obj/modulo_lib.o

clean:
	rm ${OBJ}/*.o
	rm ${MOD}/*.mod