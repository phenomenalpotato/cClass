CC=gcc
DEP = teste arquivo


# Irá procurar por uma regra/ alvo genérico no MakeFile. No nosso caso é o alvo %:	%.c
# all: teste arquivo

# Irei buscar pelas as dependencias tanto nos alvos do makefile como também nos arquivos do diretorio. Caso exista um arquivo igual ao nome da dependencia no diretorio
# E seja um arquivo .c o make irá invocar o comando de complilação automaticamente. 
# Primeiro irá procurar se existe um nome de um alvo que seja igual ao da dependencia, depois se existe um arquivo no mesmo diretório.
all:	${DEP}

# teste: teste.c
	# gcc teste.c -o teste
# arquivo:	arquivo.c
	# gcc arquivo.c -o arquivo
%:	%.c
	${CC} $< -o $@ #Alvo no MakeFile

# xi:	op.c
# 	${CC} op.c -o op #Alvo no Makefile

clean: 
	rm ${DEP}