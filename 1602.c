#include <stdio.h>

double ABS(double a) {
    if(a<0) a*=-1;
    return a;
}

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.16g",ABS(a));
}