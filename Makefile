# Define default C compiler
CC ?= gcc

win:
		$(CC) ./main.c -o ZMEIKA.exe
		./ZMEIKA.exe
		rm ./ZMEIKA.exe
linux:
	$(CC) ./main.c -o ZMEIKA
	./ZMEIKA
	rm ./ZMEIKA
