#include <stdio.h>
int main() {
    int t, a, fa=0;
    scanf("%d", &a);
    for(t=a;t;t/=10) {
        fa+=t%10;
    }
    printf(!(a%fa)?"Yes":"No");
}