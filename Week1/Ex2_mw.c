#include <stdio.h>

int string_length(char aString[]);
int string_compare(char string1[], char string2[]);

int main(int argc, char *argv[]) {
    printf("The string %s is %i characters long.\n", argv[1], string_length(argv[1]));
	if ( argc == 3 ) {
		if ( string_compare(argv[1],argv[2]) ) {
			printf("The sring %s is the same as the string %s.\n", argv[1], argv[2]);
		}
		else {
			printf("The string %s is not the same as %s.\n", argv[1], argv[2]);
		}
	}
    return 0;
}

int string_length(char aString[]) {
    int length = 0;
    while (aString[length] != 0) {
      length++;
    }
    return length;
}

int string_compare(char string1[], string2[]) {
	equality = -1;
	index = 0;
	if ( string_length(string1) == string_length(string2) ) {
		while ( string1[index] != 0 ) {
			if (string1[index] == string2[index] ) {
				equality = 1;
			}
			else {
				equality = -1;
				break;
			}
			index++;
		}
	}
	else {
		equality = -1
	}
}
