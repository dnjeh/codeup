#include <stdio.h>
int s[3000], a, b, n;
int main() {   
    int i, j, t, cnt=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &s[i]);
        if(i) s[i]+=s[i-1];
    }
    scanf("%d %d", &a, &b);
    t=s[b-1]-(a-2>=0?s[a-2]:0);
    for(i=0;i<n;i++) for(j=i;j<n;j++) {
        if(t==s[j]-(i-1>=0?s[i-1]:0)) cnt++;
    }
    printf("%d", cnt);
}