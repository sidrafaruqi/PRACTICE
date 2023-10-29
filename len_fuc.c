#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("ENTER YOUR STRING: ");
    fgets(str, sizeof(str), stdin);
    int n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        n++;
    }
    printf("%d", n-1);

    return 0;
}


