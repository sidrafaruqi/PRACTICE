#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("ENTER NUMBER OF ROWS:" );
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int k=n;k>i;k--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
