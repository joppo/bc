exe=bc_game
CXX = g++
objects=build/main.o

exe: $(objects)
	g++ $(objects) -o $(exe) -lpthread

build/%.o: src/%.cpp
	$(CXX)

clean:
	rm $(exe) $(objects)

