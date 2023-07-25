#include <stdio.h>
int pas(int a, int b) {
    int ret=0;
    if(a==1&&b==1) ret=1;
    else {
        if(b-1>=1)ret+=pas(a-1, b-1);
        if(b<=a-1) ret+=pas(a-1, b);
    } 
    return ret;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", pas(a, b));
}