#include <stdio.h>
int main() {
    int a, b, i, sum=0;
    //scanf("%d %d", &a, &b);
    a=997;
    b=36;
    for(i=1;i<=a;i++) {
        if(!(b%i)||!(i%b)) {
            sum++;
        }
    }
    printf("%d", sum);
}