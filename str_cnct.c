#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char st[100];
    char cc[200];
    int j=0;
    printf("ENTER YOUR STRING: ");
    fgets(str, sizeof(str), stdin);
    printf("ENTER YOUR 2 STRING: ");
    fgets(st, sizeof(st), stdin);

    for (int i = 0; (str[i] != '\0'); i++) {
            cc[i]=str[i];
            j++;
    }
    for (int k = 0; (st[k] != '\0'); k++) {
            cc[j]=st[k];
            j++;}
    cc[j] = '\0';

    printf("%s",cc);

}

