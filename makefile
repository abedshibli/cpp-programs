# Makefile

# Compiler settings
test:classes_oop_main.o classes_oop.o
	g++ -std=c++11  classes_oop_main.o classes_oop.o -o test
classes_oop_main.o:classes_oop_main.cpp
	gcc -std=c++11  -c classes_oop_main.cpp
classes_oop.o:classes_oop.cpp
	gcc -std=c++11  -c classes_oop.cpp
install:
	./test
clean:
	rm classes_oop.o classes_oop_main.
