#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int letters = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            letters++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != ' ' && str[i] != '\n')
            special++;
    }

    printf("Letters = %d\nDigits = %d\nSpecial Characters = %d\n",
           letters, digits, special);

    return 0;
}
