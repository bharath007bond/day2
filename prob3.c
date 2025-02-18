#include <stdio.h>

void reverseString(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}

void reverseString(char *str) {
    char *start = str;
    char *end = str;
    char temp;

    // Move the end pointer to the end of the string
    while (*end != '\0') {
        end++;
    }
    end--; // Set end pointer to the last character of the string

    // Swap the characters from start and end pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
