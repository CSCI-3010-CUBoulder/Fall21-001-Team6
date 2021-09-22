CXX = g++ # sets the compiler to the CXX global variable. This is used often.
CXXFLAGS = -std=c++17 -Wall  # sets the compiler to the 17th version and displays error messages with Wall.

# when user runs  make app we run both variables.
all: test

main: test.o functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp test.o -o test 

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

clean:
	rm test.o functions_to_implement.o test