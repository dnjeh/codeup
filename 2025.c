#include <stdio.h>
int a[10];
int cnt(int n, int b, int c) {
    for(int i=0;i<c;n/=10, i++) a[n%10]+=b;
}
int main() {
    int i, t;
    for(i=0;i<3;i++) {
        scanf(i!=2?"%d/":"%d", &t);
        cnt(t, i?-1:1, i?2:4);
    }
    for(i=0;i<10;i++) if(a[i]) break;
    printf("%s", i==10?"yes":"no");
}