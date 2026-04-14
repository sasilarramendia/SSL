#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

    FILE* archivo = fopen("output.txt", "w");
    if (archivo != NULL) {
        fputs("Hello, World!", archivo);
        fclose(archivo);
    }

    return 0;
}