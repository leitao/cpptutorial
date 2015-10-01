SRC = $(wildcard *.cpp)

PROGS = $(patsubst %.cpp, %, $(SRC))

all: $(PROGS)

% : %.cpp
	c++ -o $@ $^ -std=c++11 -g3
