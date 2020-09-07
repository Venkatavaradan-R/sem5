output: server.o client.o
	gcc server.o client.o -o output

server.o: server.c header.h
	gcc -c server.c

client.o: client.c header.h
	gcc -c client.c

clean:
	rm *.o output
