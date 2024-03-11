#include <stdio.h>
int main() {
    int i1, i2, i3, f1=0, f2=0, sum=0, _t;
    char c1, c2, c3, t;
    scanf("%c%d%c", &c1, &i1, &t);
    scanf("%c%d%c", &c2, &i2, &t);
    scanf("%c%d%c", &c3, &i3, &t);
    _t=i1+i2+i3;
    if(c1==c2&&c2==c3&&i1==i2&&i2==i3) {
        sum+=3334;
    }
    if(c1==c2&&c2==c3) {
        sum+=3333;
    }
    if(i1==i2&&i2==i3) {
        sum+=3333;
    }
    if((i1==i2&&i2==i3)||!_t||_t==8||_t==27||_t==64||_t==216) {
        sum+=9999;
    }
    printf("%d", sum);
}