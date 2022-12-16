#include <stdio.h>
int main() {
    int now, ned, ate=0, t;
    scanf("%d %d", &now, &ned);
    for(;now>=ned;) {
        ate+=now/ned;
        t=now/ned;
        now%=ned;
        now+=t;
    }
    printf("%d", ate);
}