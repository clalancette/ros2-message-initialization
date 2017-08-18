CXX=g++
CXXFLAGS=-g -Wall -Wextra -std=c++14

all: no-initialization-demo

no-initialization-demo: no-initialization-demo.cc
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f *~ *.o no-initialization-demo
