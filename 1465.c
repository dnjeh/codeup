#include <stdio.h>
int main() {
    int i, j, a, b;
    scanf("%d %d", &a, &b);
    for(i=a;i>0;i--) {
        for(j=b*(a-1)+2+i-1;j>=i;j-=a) {
            printf("%d ", j);
        }   
        printf("\n");
    }
}   