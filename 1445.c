#include <stdio.h>
int main() {
    int n, m, i, a1=0, b1=0;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n+m];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    if(n+m==2) {
        if(a[0]>b[0]) printf("%d %d", b[0], a[0]);
        else printf("%d %d", a[0], b[0]);
        return 0;
    }
    for(i=0;i<n+m;i++) { 
        if((a1==-1||a[a1]>b[b1])&&b1!=-1) {
            c[i]=b[b1];
            if(b1+1>=m||b1==-1) b1=-1;
            else b1++;
        }
        else if((b1==-1||a[a1]<b[b1])&&a1!=-1) {
            c[i]=a[a1];
            if(a1+1>=n||a1==-1) a1=-1;
            else a1++;
        }
        else {
            c[i]=a[a1];
            c[++i]=b[b1];
            if(a1+1<n&&a1!=-1) a1++;
            else a1=-1;
            if(b1+1<n&&b1!=-1) b1++;
            else b1=-1;
        }
    }
    for(i=0;i<n+m;i++) {
        printf("%d ", c[i]);
    }
}