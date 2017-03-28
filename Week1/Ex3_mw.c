#include <stdio.h>
#include <stdlib.h>
#include "string_mw.h"

int main(int argc, char *argv[]) {
    if ( argc == 2) {
        printf("The string %s is %i characters long.\n", argv[1], string_length(argv[1]));
    }
    else if ( argc == 5 ) {
	if ( string_compare(argv[1],"-r") ) {
	    printf("The new string is: %s\n", string_replace(argv[2],argv[3][0],argv[4][0]));
	}

    }
    else if ( argc == 3 ) {
        if ( string_compare(argv[1],argv[2]) ) {
	    printf("The sring %s is the same as the string %s.\n", argv[1], argv[2]);
        }
	else {
	    printf("The string %s is not the same as %s.\n", argv[1], argv[2]);
	}
	printf("Joining the strings %s and %s together results in: %s.\n", argv[1],argv[2],string_concat(argv[1], argv[2]));
    }

    return 0;
}

