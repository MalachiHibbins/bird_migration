CC = g++
CFLAGS = -O2 -Wall -std=c++17
SRC = main.cpp system.cpp box.cpp particle.cpp
EXEC = myvicsek
OBJ = $(SRC:.cpp=.o)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $@

clean:
	rm -f $(OBJ) $(EXEC)