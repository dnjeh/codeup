#include <stdio.h>
int main() {
    int i, j, a, b[10001] = {};
    scanf("%d", &a);
    for(i=0;i<a;i++)
        scanf("%d", &b[i]);
    for(i=0;i<a;i++)
        for(j=0;j<a;j++) {
            if(b[i]<b[j]) {
                b[10000]=b[i];
                b[i]=b[j];
                b[j]=b[10000];
            }
        }
    printf("%d", b[0]);
}
