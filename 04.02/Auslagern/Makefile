HEADERS = VergleicheZahl.h

default: Zahlenvergleich

Zahlenvergleich.o: Zahlenvergleich.c $(HEADERS)
	gcc -c Zahlenvergleich.c -o Zahlenvergleich.o

VergleicheZahl.o: VergleicheZahl.c
	gcc -c VergleicheZahl.c -o VergleicheZahl.o

Zahlenvergleich: Zahlenvergleich.o VergleicheZahl.o
	gcc Zahlenvergleich.o VergleicheZahl.o -o Zahlenvergleich

clean:
	-rm -f Zahlenvergleich.o
	-rm -f VergleicheZahl.o
	-rm -f Zahlenvergleich
