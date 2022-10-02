#include <stdio.h>
int main(){
    int i, n, a[101]={0}, t[2];
    scanf("%d", &n);
    for(i=0;i<=100;i++) {
        a[i]=-1;
    }
    /*struct factory
    {
        int number;
        int gas;
    };
    struct factory a[100];*/
    for(i=0;i<n;i++) {
        scanf("%d %d", &t[0], &t[1]);
        a[t[0]]=t[1];
    }
    for(i=1;i<=100;i++) {
        if(a[i]!=-1) {
            printf("%d %d\n", i, a[i]);
        }
    }
}