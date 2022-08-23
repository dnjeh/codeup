#include <stdio.h>
int main() {
    int a, i, j, max = 0;
    scanf("%d", &a);
    for(i=1;i*2<a;i++) {
        if(max<i*(a-i*2)) max=i*(a-i*2);
    }
    for(i=1;i*2<a;i++)
        if(max==i*(a-i*2)) {
            printf("%d", i);
            break;
        }
}