#include <stdio.h>

int main() {
    char ch[100];

    printf("Enter a string: ");
    gets(ch);

    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fputs(ch,file);
    fclose(file);

    printf("String written to file successfully!");

    return 0;
}
