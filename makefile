all: chess

main.o: main.cpp

	g++ -Wall -c -o main.o main.cpp

chess: main.o

	g++ main.o -o chess

clean: 
	rm -f *.o chess
