#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&a);
    int sum=0;
    for (int i=1;i<=a;i++){
        sum+=i;
    }
    printf("%d",sum);

}
