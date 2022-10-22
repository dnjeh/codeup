#include <stdio.h>
int main() {
    int i, n, t, ga=0, sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(t) {
            sum+=1+ga++;
        }
        else {
            ga=0;
        }
    } 
    printf("%d", sum);
}