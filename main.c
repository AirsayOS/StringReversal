#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main() {
    char* ch = allocate_memory(102); // allocate memory dynamically
    if (ch == NULL) {
        printf("Error: unable to allocate memory\n");
        return 1;
    }

    if (get_input(ch, 101) != 0) {
        printf("Error: invalid input\n");
        return 1;
    }

    int length = strlen(ch);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", ch[i]);
    }

    free(ch); // free dynamically allocated memory
    return 0;
}

char* allocate_memory(int size) {
    char* ptr = malloc(size * sizeof(char));
    return ptr;
}

int get_input(char *ch, int max_length) {
    printf("Please input the string to be reversed (up to %d characters): \n", max_length - 1);
    if (fgets(ch, max_length, stdin) == NULL) {
        return 1; // error reading input
    }
    if (strlen(ch) == max_length - 1 && ch[max_length - 2] != '\n') {
        // input too long
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return 1;
    }
    ch[strcspn(ch, "\n")] = '\0'; // remove newline character
    return 0;
}
