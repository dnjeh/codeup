#include <stdio.h>
int b;
void print(int a) {
    if(a%2==1) {
        printf("%d ", a);
    }
    if(b>a) {
        print(a+1);
    }
}
int main() {
    int a;
    scanf("%d %d", &a, &b);
    print(a);
}