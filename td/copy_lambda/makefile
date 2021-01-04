CC=g++
XFLAGS=-std=c++17
OFLAGS=-O3

.PHONY = clean

app: main.cc
	$(CC) $(OFLAGS) $(XFLAGS) $< -o $@

clean:
	rm -Rf *~ app
