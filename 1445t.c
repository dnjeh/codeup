#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int a, b, tsum=1, i;
    scanf("%d %d", &a, &b);
    for(i=0;i<a;i++) {
        printf("%d ", tsum);
        tsum+=rand()%30+1;
    }
    printf("\n");
    tsum=1;
    for(i=0;i<b;i++) {
        printf("%d ", tsum);
        tsum+=rand()%30+1;
    }
}