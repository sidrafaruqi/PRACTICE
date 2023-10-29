#include <stdio.h>
#include <stdlib.h>
int fabonacci(int x, int a, int b){
    printf("%d ",a+b);
    a=a+b;
    b=a-b;
    if (a+b<=x){
        fabonacci(x,a,b);
    }
    }

int main()
{
    int n;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&n);
    printf("1 1 ");
    if (n==1){
        //this block is empty
    }
    else{
        fabonacci(n,1,1);
    }


}
