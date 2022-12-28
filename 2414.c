#include <stdio.h>
#include <math.h>
int main() {
    int i, j, n;
    char t;
    scanf("%d", &n);
    long long int a[n][2], b;
    for(i=0;i<n;i++) {
        j=0;
        for(scanf("%c", &t);t!=',';j++, scanf("%c", &t)) {
            if(!j) a[i][0]=(t-64);
            else a[i][0]+=((t-64)*(long long int)pow(60, j));
        } 
        for(;getchar()!=',';);
        scanf("%lld", &a[i][1]);
        for(;getchar()!='\n';);
    }
    j=0;
    for(;scanf("%c", &t)!=EOF;j++) {
        if(t=='-') continue;
        if(!j) b=(t-64);
        else b+=((t-64)*(long long int)pow(60, j));
    } 
    for(i=0;i<n;i++) {
        printf("%lld %lld", a[i][0], b);
        if(a[i][0]==b) {
            printf("%lld", a[i][1]);
        }
    }
}