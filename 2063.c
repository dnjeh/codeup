#include <stdio.h>
int main() {
    int i, j, a[10];
    for(i=0;i<10;i++) scanf("%d", &a[i]);
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            printf("%c ", a[j]>=(10-i)*10?'#':' ');
        }
        printf("\n");
    }
}