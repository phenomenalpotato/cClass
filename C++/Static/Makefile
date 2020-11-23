BIN = main
FILE = static
BIN2 = static_classes_struct
BIN3 = local_static

all:	${BIN3} execute

execute:	
	./${BIN3}

object:
	g++ -c ${BIN}.cpp ${FILE}.cpp

link:	object
	g++ ${BIN}.o ${FILE}.o -o ${BIN}

run:	link
	./${BIN}