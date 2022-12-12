#include <stdio.h>  // printf
#include <stdlib.h> // malloc, calloc, NULL, free
#include <string.h> // strcpy

int main(void) {
    int size = 5;
    int *a1 = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        a1[i] = i * i;
    }

    for (int i = 0; i < size; i++) {
        printf("%i ", a1[i]);
    }
    printf("\n");

    char *string = malloc(strlen("hello world") + 1);
    if (string == NULL) {
        printf("Something went wrong with malloc");
    }
    strcpy(string, "hello world");
    printf("%s", string);

    char *string_copy = NULL;
    strdup(string_copy, string);
    printf("%s", string_copy);

    free(a1);
    free(string);
    free(string_copy);

    return 0;
}