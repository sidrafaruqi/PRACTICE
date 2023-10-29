#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    int count=0;
    for(int j=1;j<=i/2;j++){
        if (i%j==0){
            count++;
        }
    }
    if (count<=1){
        printf("PRIME");
    }
    else{
        printf("NOT PRIME");
    }
}
