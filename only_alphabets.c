#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("ENTER YOUR STRING: ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')) {
            printf("%c", str[i]);
        }
    }

    return 0;
}
