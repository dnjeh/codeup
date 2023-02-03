#include <stdio.h>
int main() {
    int a[10], sum=0, i, cnt[2]={0, };
    double b;
    for(i=0;i<10;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    b=sum/10.0;
    for(i=0;i<10;i++) {
        if(b<=a[i]) cnt[0]++;
        else cnt[1]++;
    }
    printf("%.1lf\n%d %d", b, *cnt, cnt[1]);
}