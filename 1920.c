#include <stdio.h>
int a=0x40000000, c=0;
void tobin(int b) {
    if(c==1||a&b) {
        if(a&b) {
            printf("1");
        }
        else {
            printf("0");
        }
        if (!c) {
            c=1;
        }
        
    }
    a/=2;
    if(a) {
        tobin(b);
    }
}
int main() {
    int b;
    scanf("%d", &b);
    if(b!=0) {
        tobin(b);
    }
    else {
        printf("0");
    }
}