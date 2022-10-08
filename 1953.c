#include <stdio.h>
int n;
void tri(int a, int b) {
    if(b>0) {
        b--;
        printf("*");
    }
    if(a==n&&b==0) {
        printf("\n");
    }
    else if(b==0) {
        printf("\n");
        tri(a+1, a+1);
    }
    else {
        tri(a, b);
    }
}
int main() {
    scanf("%d", &n);
    tri(1,1);
}