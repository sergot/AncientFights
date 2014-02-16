CC=g++
SOURCES=$(wildcard src/*.cpp)
HEADERS=$(wildcard src/*.h)
BIN=fight

all: bin
bin:
	$(CC) $(SOURCES) $(HEADERS) -o $(BIN)

clean:
	rm -f $(BIN)
