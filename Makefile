all: lecon1 lecon1_1
lecon1: lecon_1.c
	gcc -o lecon1 lecon_1.c

lecon1_1: lecon_1_1.c
	gcc -o lecon1_1 lecon_1_1.c

