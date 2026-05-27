#include <stdio.h>
#include <string.h>

void reverse(char str[], int n) {

    if (n == 0) {
        return;
    }

    printf("%c", str[n - 1]);

    reverse(str, n - 1);
}

int main() {

    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("Reversed string: ");

    reverse(str, n);

    return 0;
}