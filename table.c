#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&a);
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
      printf("%d X %d = %d\n",a,i,a*i);
    }


}

