#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        int count=0;
    for (int j=1;j<=i/2;j++){
        if (i%j==0){
            count+=1;
        }

    }
    if (count<=1){
        printf("%d ",i);
    }

    }
}
