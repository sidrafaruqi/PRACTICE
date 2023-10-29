#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int v=0,c=0,e=0;
    printf("ENTER YOUR STRING: ");
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            v++;
        }else if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')) {
            c++;
        } else {
            e++;
        }}


    printf("NUMBER OF VOWELS: %d\n",v);
    printf("NUMBER OF CONSONANTS: %d\n",c);
    printf("NUMBER OF EXTRAS: %d\n",e);

}
