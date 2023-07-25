#include <stdio.h>
#include <math.h>
double dodot(int x1, int x2, int y1, int y2) {
    return sqrt(pow(abs(x2-x1), 2)+pow(abs(y2-y1), 2));
}
int main() {
    int i, n;
    double sum=0.0;
    scanf("%d", &n);
    int a[n][2];
    for(i=0;i<n;i++) {
        scanf("%4d%4d", &a[i][0], &a[i][1]);
        if(i) sum+=dodot(a[i-1][0], a[i][0], a[i-1][1], a[i][1]);
    }
    printf("%.02lf", sum);
}