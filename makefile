exe=bc_game
CXX = g++
objects=build/main.o build/operations.o
CXXFLAGS = --std=c++11

exe: $(objects)
	g++ $(objects) -o $(exe) -lpthread

build/%.o: src/%.cpp
	$(CXX) -c $(CXXFLAGS) $^ -o $@

clean:
	rm $(exe) $(objects)

