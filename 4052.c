#include <stdio.h>
int mus(int a) {
    int sum=0;
    for(;a;a/=10) sum+=a%10;
    return sum;
}
int main() {
    int t, min, max, i;
    for(i=0;i<10;i++) {
        scanf("%d", &t);
        t=mus(t);
        if(!i||t<min) min=t;
        if(!i||t>max) max=t;
    }
    printf("%d %d", max, min);
}