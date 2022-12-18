#include <stdio.h>
int main() {
    int n, sum=0, i, j, tsum=0;
    char t1[1000];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        tsum=0;
        scanf("%s", t1);
        for(j=0;t1[j]!=',';j++);
        for(j++;t1[j]!=',';j++);
        for(j++;t1[j]!=',';j++) {
            tsum*=10;
            tsum+=t1[j]-48;        
        }
        sum+=tsum;
    }
    printf("%.2lf", sum/(double)n);
}