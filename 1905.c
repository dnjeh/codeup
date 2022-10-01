#include <stdio.h> 
int sum=0;
void pibonazi(int a) {
    sum+=a;
    if(a!=1) {
        pibonazi(a-1);
    }
}
int main() {
    int a;
    scanf("%d", &a);
    pibonazi(a);
    printf("%d", sum);
}