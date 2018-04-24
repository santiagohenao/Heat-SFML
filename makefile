all : simulation
	./simulation
simulation : main.o
	g++ main.o -o simulation -lsfml-graphics -lsfml-window -lsfml-system
*.o : main.cpp
	g++ -c main.cpp
clean :
	rm -f simulation *.o
