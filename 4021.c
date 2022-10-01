#include <stdio.h>
int main() {
    int i, sum=0, t;
    for(i=0;i<7;i++) {
        scanf("%d", &t);
        if(t%2==1) {
            sum+=t;
        }
    }
    printf("%d", sum?sum:-1);
}