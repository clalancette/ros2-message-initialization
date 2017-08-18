CXX=g++
CXXFLAGS=-g -Wall -Wextra -std=c++14

all: no-initialization-demo zero-initialization-helper-demo factory-helper-demo

no-initialization-demo: no-initialization-demo.cc
	$(CXX) $(CXXFLAGS) -o $@ $<

zero-initialization-helper-demo: zero-initialization-helper-demo.cc
	$(CXX) $(CXXFLAGS) -o $@ $<

factory-helper-demo: factory-helper-demo.cc
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f *~ *.o no-initialization-demo zero-initialization-helper-demo factory-helper-demo
