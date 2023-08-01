#include <stdio.h>
int s[3000]={4, 2, 3, 1, 10, 3, 1, 3, 4, 5, 9, 7, 4, 1, 3, 8, 2, 5, 1, 9}, a=3, b=7, n=20;
int main() {   
    int i, j, t, cnt=0;
    for(i=0;i<n;i++) {
        if(i) s[i]+=s[i-1];
    }
    t=s[b-1]-(a-2>=0?s[a-2]:0);
    for(i=0;i<n;i++) for(j=i;j<n;j++) {
        if(t==s[j]-(i-1>=0?s[i-1]:0)) cnt++;
    }
    printf("%d", cnt);
}