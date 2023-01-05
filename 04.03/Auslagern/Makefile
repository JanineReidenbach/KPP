HEADERS = Umfang.h Inhalt.h

default: Radius

Radius.o: Radius.c $(HEADERS)
	gcc -c Radius.c -o Radius.o

Umfang.o: Umfang.c
	gcc -c Umfang.c -o Umfang.o

Inhalt.o: Inhalt.c
	gcc -c Inhalt.c -o Inhalt.o

Radius: Radius.o Umfang.o Inhalt.o
	gcc Radius.o Umfang.o Inhalt.o -o Radius

clean:
	-rm -f Radius.o
	-rm -f Umfang.o
	-rm -f Inhalt.o
	-rm -f Radius
