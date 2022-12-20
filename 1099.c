#include <stdio.h>
int main() {
    int i, j, a[10][10], x, y;
    for(i=0;i<10;i++)
        for(j=0;j<10;j++) {
            scanf("%d", &a[j][i]);
            if(a[j][i] == 2) {
                x=j;
                y=i;
            }
        }
    for(i=1;i<9;i++)
        for(j=1;j<9;j++) {
            a[j][i] = 9;
            if(x==j && y==i) {
                i=9;
                j=9;
            }
            else if(8==j && 8==i) {
                i=9;
                j=9;
            }
            else if(a[j+1][i] == 1) {
                i++;
                j--;    
            }
        }
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}
