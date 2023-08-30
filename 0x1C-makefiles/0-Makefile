all: school

school: main.o school.o
	gcc -o school main.o school.o

main.o school.o: m.h

.PHONY: clean
clean:
	rm *.o
