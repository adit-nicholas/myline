OFILES= main.o draw.o display.o
FLAG= -Wall
C= gcc

run: all
	./main

all: $(OFILES)
	$(C) -o main $(OFILES)

main.o: main.c display.h draw.h ml6.h
	$(C) -c main.c

draw.o: draw.c draw.h display.h ml6.h
	$(C) $(FLAG) -c draw.c

display.o: display.c display.h ml6.h
	$(C) $(FLAG) -c display.c

clean:
	rm *.o *~
