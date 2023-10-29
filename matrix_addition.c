#include <stdio.h>

int main() {
    int a,b;
    printf("Enter The Number of rows: ");
    scanf("%d",&a);
    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d",&b);
    int arra[a][b];
    int arrb[a][b];
    int arrc[a][b];
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
                printf("ENTER VALUE FOR MATRIX 1 ROW %d and COLUMN %d",i+1,j+1);
                scanf("%d", &arra[i][j]);}}
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
                printf("ENTER VALUE FOR MATRIX 2 ROW %d and COLUMN %d",i+1,j+1);
                scanf("%d", &arrb[i][j]);}}
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
                arrc[i][j]=arra[i][j]+arrb[i][j];
                }
                }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
                printf("%d",arrc[i][j]);
                }}






}
