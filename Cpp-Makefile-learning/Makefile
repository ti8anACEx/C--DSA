# Tutorial from ChatGPT::

# Example 1
# main: main.cpp
# 	g++ main.cpp -o main.exe

# Example 2
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = main
OBJS = main.o custom_library.o

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET).exe $(OBJS) 

# Compile src files into obj files
%.0: %.cpp
	$(CXX) $(CXXFLAGS) -o $< -o $@

clean:
	rm -f *.o $(TARGET)



# Tutorial from YouTubers::
# variable = g++

# Captain:
# 	make exe && clear && .\exe

# hello: hello.cpp test.o
# 	$(variable) -o hello.exe hello.cpp

# test.o: test.cpp
# 	g++ -c test.cpp -o test.o

# exe: *.o
# 	g++ -std=c++20 *.o -o exe


# %.o: %.cpp
# 	g++ -std=c++20 -c $^

# clean:
# 	rm *.o exe