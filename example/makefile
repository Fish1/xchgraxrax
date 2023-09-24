install: ./a.out ./c.out
	./a.out
	./c.out

clean:
	rm ./a.out
	rm ./c.out

./a.out:
	as ./asm/index.s -o ./asm/index.o
	ld ./asm/index.o -o ./a.out
	rm ./asm/index.o

./c.out:
	gcc ./c/index.c -o ./c.out
