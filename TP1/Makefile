cosinus: cosinus.o 
	g++ -o cosinus cosinus.o -lm
cosinus.o: cosinus.cpp
	g++ -c cosinus.cpp -Wall
hello: hello.o 
	g++ -o hello hello.o
hello.o: hello.cpp
	g++ -c hello.cpp -Wall
clean:
	rm -rf *.o cosinus
	rm -rf *.o hello