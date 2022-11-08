#include <stdio.h>
int main() {
    int maxo=0, maxe=0, i, t;
    for(i=0;i<10;i++) {
        scanf("%d", &t);
        if(t%2&&maxo<t) {
            maxo=t;
        }
        if(!(t%2)&&maxe<t) {
            maxe=t;
        }
    }
    if(maxo&&maxe) printf("%d %d", maxo, maxe);
    else if(maxo) printf("%d", maxo);
    else if(maxe) printf("%d", maxe);
}