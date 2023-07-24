#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==b) printf("tie");
    else if((a+1)%3==b) printf("win");
    else printf("lose");
}