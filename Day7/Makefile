Compiler=g++

all: main.o libshape.so
	$(Compiler) main.o -L. -lshape -o file

main.o :
	$(Compiler) -c main.cpp 

libshape.so :
	$(Compiler) --shared -fPIC shape.cpp -o libshape.so