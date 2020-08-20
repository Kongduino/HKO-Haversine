IDIR =./
CC=gcc

haversine: $(OBJ)
	$(CC) -o hko_haversine hko_haversine.cpp
	g++ -o hko_haversine hko_haversine.o
	rm hko_haversine.o

.PHONY: clean

clean:
	rm -f hko_haversine.o hko_haversine
