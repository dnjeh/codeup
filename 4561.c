#include <stdio.h>
int main() {
    int i, sum=0, t, min=100;
    for(i=0;i<7;i++) {
        scanf("%d", &t);
        if(t%2) {
            sum+=t;
            if(t<min) min=t;
        }
    }
    if(sum) printf("%d\n%d", sum, min);
    else printf("-1");
}