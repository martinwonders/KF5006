#include <stdio.h>

int string_length(char aString[]);

int main(int argc, char *argv[]) {
    printf("The string %s is %i characters long.\n", argv[1], string_length(argv[1]));
    return 0;
}

int string_length(char aString[]) {
    int length = 0;
    while (aString[length] != 0) {
      length++;
    }
    return length;
}
