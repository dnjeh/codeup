#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.01lf\n%d\n%d", a/(double)b, a/b, (int)pow(a, b));
}