# Makefile

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11

# Source files
SRCS = classes_oop_main.cpp classes_oop.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable
EXECUTABLE = classes_oop_main

# Targets
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
install:
	./classes_oop_main
