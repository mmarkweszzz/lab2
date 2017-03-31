main: calculate.o main.o
	g++ -o calculate main.o calculate.o

calculate.o: calculate.cpp calculate.h
	g++ -c calculate.cpp

main.o: main.cpp calculate.h
	g++ -c main.cpp

clean:
	rm calculate *.o
