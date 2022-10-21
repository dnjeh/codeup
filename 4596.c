#include <stdio.h>
int main() {
    int i, j, t, max[3]={0,0,0};
    for(i=1;i<=9;i++) {
        for(j=1;j<=9;j++) {
            scanf("%d", &t);
            if(max[0]<t) {
                max[0]=t;
                max[1]=i;
                max[2]=j;
            }
        }
    }
    printf("%d\n%d %d", max[0], max[1], max[2]);
}