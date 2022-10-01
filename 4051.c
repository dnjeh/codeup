#include <stdio.h>
int main() {
    int a[2][5], b[2][5], sum_day[5]={0,0,0,0,0}, sum_week=0, i, selad; 
    for(i=0;i<5;i++) {
        scanf("%d.%d %d.%d", &a[0][i], &a[1][i], &b[0][i], &b[1][i]);
        sum_day[i]=(((b[0][i]-a[0][i]-1)*60+(b[1][i]-a[1][i])*6)>=240?240:((b[0][i]-a[0][i]-1)*60+(b[1][i]-a[1][i])*6)<=0?0:((b[0][i]-a[0][i]-1)*60+((b[1][i]-a[1][i])*6)));
    }
    for(i=0;i<5;i++) {
        sum_week+=sum_day[i];
    }
    selad=(sum_week/30)*5000;
    if(sum_week>=900) selad-=(selad/20);
    else if(sum_week<=300) selad+=(selad/20);
    printf("%d", selad);
}