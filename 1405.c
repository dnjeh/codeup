#include <stdio.h>
int main() {
    int a, i, j;
    scanf("%d", &a);
    int b[a+1];
    for(i=0;i<a;i++) {
        scanf("%d", &b[i+1]);
    }
    for(i=0;i<a;i++) {
        for(j=1;j<=a;j++)
            printf("%d ", b[j]);
        for(j=0;j<=a;j++) {
            if(j!=a) {
                b[j]=b[j+1];
            }
            else
                b[j]=b[0];
        }
        
        printf("\n");
    }
}