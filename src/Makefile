GCC=g++
FLAGS=-g

default: client server mainclient mainserver

mainclient: mainclient.cpp
	$(GCC) client.o mainclient.cpp -o server

mainserver: mainserver.cpp
	$(GCC) server.o mainserver.cpp -o client

client: client.cpp
	$(GCC) -c client.cpp

server: server.cpp
	$(GCC) -c server.cpp

clean:
	rm -f *.o *.out client server
