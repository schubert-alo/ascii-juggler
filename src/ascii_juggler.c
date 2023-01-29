/*
 ============================================================================
 Name        : ascii_juggler_1.c
 Author      : schubert
 Version     : 0.9
 Copyright   : Your copyright notice
 Description : printing and converting some chars from the ASCII table, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("!!! Welcome to awesome Ascii-Juggler v0.9 !!! \n\n"); /* printf !!! Welcome to Ascii-Juggler v0.9 !!! */

	for(int i = 0; i<26; i++){
		printf("char: %c \n", i+65);
	}

	return EXIT_SUCCESS;
}
