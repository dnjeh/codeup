#include <stdio.h>
int main() {
    int a, b, t[3], i;
    scanf("%d %d", &a, &b);
    t[0]=a+b; t[1]=a-b; t[2]=a*b;
    for(i=0;i<3;i++) {
        if(t[(i+2)%3]<=t[i]&&t[i]<=t[(i+1)%3]||t[(i+2)%3]>=t[i]&&t[i]>=t[(i+1)%3]) {
            printf("%d", t[i]);
            return 0;
        }
    }
}