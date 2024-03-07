#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    char str[100];
    int count[ALPHABET_SIZE] = {0};

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) 
        {
            char c = toupper(str[i]);       
            count[c - 'A']++;
        }
    }
    printf("Output:\n");

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
