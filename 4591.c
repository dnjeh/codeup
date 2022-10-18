#include <stdio.h>
int main() {
    int max[2]={0, 0}, i, t=0;
    for(i=1;i<10;i++) {
        scanf("%d", &t);
        if(t>max[0]) {
            max[0]=t;
            max[1]=i;
        }
    }
    printf("%d\n%d", max[0], max[1]);
}