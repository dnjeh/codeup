#include <stdio.h>

int cou=1, t=1;

void snowball_cou(int a) {
    if(a!=1) {
        cou++;
        if(a%2) {
            a=a*3+1;
        }
        else {
            a/=2;
        }
        snowball_cou(a);
    }
}

void snowball_inp(int a, int b[]) {
    b[cou-t]=a;
    t++;
    if(a!=1) {
        if(a%2) {
            a=a*3+1;
        }
        else {
            a/=2;
        }
        snowball_inp(a, b);
    }
}

void snowball_out(int b[]) {
    if(cou!=t) {
        printf("%d\n", b[t]);
        t++;
        snowball_out(b);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    snowball_cou(a);
    int b[cou];
    snowball_inp(a, b);
    t=0;
    snowball_out(b);
}