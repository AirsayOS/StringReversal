#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h" // include header file for function prototypes

int main() {
    char* ch = allocate_memory(102); // allocate memory dynamically
    if (ch == NULL) {
        printf("Error: unable to allocate memory\n");
        return 1;
    }

    if (get_input(ch, 101) != 0) { // get input from user and store it in ch
        printf("Error: invalid input\n");
        return 1;
    }

    int length = strlen(ch); // get the length of the string
    for (int i = length - 1; i >= 0; i--) { // loop through the string backwards
        printf("%c", ch[i]); // print each character to the console
    }

    free(ch); // free dynamically allocated memory
    return 0;
}

char* allocate_memory(int size) { // function to allocate memory dynamically
    char* ptr = malloc(size * sizeof(char)); // allocate memory
    return ptr; // return pointer to the allocated memory
}

int get_input(char *ch, int max_length) { // function to get input from user
    printf("Please input the string to be reversed (up to %d characters): \n", max_length - 1);
    if (fgets(ch, max_length, stdin) == NULL) { // read input from user and store in ch
        return 1; // error reading input
    }
    if (strlen(ch) == max_length - 1 && ch[max_length - 2] != '\n') { // check if input is too long
        // input too long
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {} // clear input buffer
        return 1;
    }
    ch[strcspn(ch, "\n")] = '\0'; // remove newline character from input
    return 0; // successful input
}
