#include <stdio.h>
int main() {
    int a, com[4] = {1, 3, 5, 10}, i, sum=0;
    a=21;
    for(i=3;i>=0;i--) {
        sum+=a/com[i];
        a%=com[i];
    }
    printf("%d", sum);
}