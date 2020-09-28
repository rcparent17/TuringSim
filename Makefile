turing: bin turing.c turing.h
	gcc -g -Wall -Werror turing.c -o bin/turingSim

bin:
	if [ ! -d "bin" ]; then mkdir bin; fi

clean:
	rm -rf bin/
