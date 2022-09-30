main.out: main.cpp Makefile
	g++ $< -std=c++14 -O3 -o $@ -g 

clean:
	rm -f main.out
