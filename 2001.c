#include <stdio.h>
int main() {
    int min[2]={2010,2010}, i, t;
    double fin;
    for(i=0;i<3;i++) {
        scanf("%d", &t);
        if(min[0]>t) min[0]=t;
    }
    for(i=0;i<2;i++) {
        scanf("%d", &t);
        if(min[1]>t) min[1]=t;
    }
    fin=min[0]+min[1];
    printf("%.1lf", fin+fin/10);
}