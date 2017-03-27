#include <stdio.h>
#include <stdlib.h>

int string_length(char aString[]);
int string_compare(char string1[], char string2[]);
char* string_concat(char string1[], char string2[]);

int main(int argc, char *argv[]) {
    printf("The string %s is %i characters long.\n", argv[1], string_length(argv[1]));
	if ( argc == 3 ) {
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

int string_length(char aString[]) {
    int length = 0;
    while (aString[length] != 0) {
      length++;
    }
    return length;
}

int string_compare(char string1[], char string2[]) {
	int equality = 0;
	int index = 0;
	if ( string_length(string1) == string_length(string2) ) {
		while ( string1[index] != 0 ) {
			if (string1[index] == string2[index] ) {
				equality = 1;
			}
			else {
				equality = 0;
				break;
			}
			index++;
		}
	}
	else {
		equality = 0;
	}
	return equality;
}

char* string_concat(char string1[], char string2[]) {
	int s1_length = string_length(string1);
	int s2_length = string_length(string2);
	int new_length = s1_length + s2_length + 1;
	char *new_string = malloc(sizeof(char) * new_length); 
	for (int i = 0; i < s1_length; i++) {
		new_string[i] = string1[i];
	}
	
	for (int i = s1_length; i <= new_length; i++) {
		new_string[i] = string2[i - s2_length];
	}
	return new_string;
}
