#include <stdio.h>
int main() {
    int n, i, j, key[3];
    scanf("%d", &n);
    int a[n][3];
    for(i=0;i<n;i++) {
        scanf("%d %d", &a[i][1], &a[i][2]);
        a[i][0]=i;
    }
    for (i=1;i<n;i++) {
        key[0]=a[i][0];
        key[1]=a[i][1];
        key[2]=a[i][2];
        for(j=i-1;j>=0&&a[j][1]<key[1]||(a[j][1]==key[1]&&a[j][2]<key[2]);j--) {
            a[j+1][0]=a[j][0];
            a[j+1][1]=a[j][1];
            a[j+1][2]=a[j][2];
        }
        a[j+1][0]=key[0];
        a[j+1][1]=key[1];
        a[j+1][2]=key[2];
    }

    for(i=0;i<n;i++) {
        printf("%d %d %d\n", a[i][0]+1,a[i][1],a[i][2]);
    }
    return 0;
}