#include <stdio.h>
int main() {
    int a[5], ave=0, i, j, temp, key;
    for (i=0;i<5;i++)
        scanf("%d", &a[i]);
    for (i=1; i<5; i++) {
        key=a[i];
        for(j=i-1;j>=0&&a[j]>key;j--) {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    for(i=0;i<5;i++) {
        ave+=a[i];
    }    
    ave/=5;
    printf("%d\n%d", ave, a[2]);
}
