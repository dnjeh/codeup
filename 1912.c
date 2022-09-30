#include <stdio.h> 
int sum=1;
void packtorial(int a) {
    sum*=a;
    if(a!=1) {
        packtorial(a-1);
    }
}
int main() {
    int a;
    scanf("%d", &a);
    packtorial(a);
    printf("%d", sum);
}