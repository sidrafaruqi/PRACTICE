#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
//    char st[100];
    char cc[200];
    printf("ENTER YOUR STRING: ");
    fgets(str, sizeof(str), stdin);
//    printf("ENTER YOUR 2 STRING: ");
//    fgets(str, sizeof(str), stdin);

    for (int i = 0; (str[i] != '\0'); i++) {
            cc[i]=str[i];
    }
    printf("%s",cc);

}

