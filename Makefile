all: build

build: main.cpp address.hpp address.cpp
        g++ -std=c++2b main.cpp address.cpp


clean:
         rm -rf  *.out *.gch

# rebuild:
# 	clean build

