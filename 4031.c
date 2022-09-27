#include <stdio.h>
int main() {
    int t, i, max_even=0, max_odd=0;
    for(i=0;i<7;i++) {
        scanf("%d", &t);
        if(t%2==0) {
            if(t>max_even) max_even=t;
        }
        else {
            if(t>max_odd) max_odd=t;
        }
    }
    printf("%d", max_even+max_odd);
}