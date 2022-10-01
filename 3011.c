#include <stdio.h>
int n, i, j, temp;
int main() {
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        for(j=1;j<n;j++) {
            if(a[j-1]>a[j]) {
                break;
            }
            
        }
        if(j==n) {
            printf("%d", i+1);
            return 0;
        }
    }
    printf("%d", n-1);
}