all: buf.c test.c
	gcc -Wall -Wextra -O0 -g -fno-stack-protector buf.c -o buf
	gcc -Wall -Wextra -O0 -g -fno-stack-protector test.c -o test

clean:
	rm -rf buf.dSYM test.dSYM
	touch buf.c~ buf test.c~ test
	rm *~ buf test
