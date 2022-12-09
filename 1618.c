#include <stdio.h>
int main() {
    int i, j, a[3], min[3]={300,300,300}, tsum=0;
    for(i=0;i<3;i++) {
        scanf("%d", &a[i]);
        tsum+=a[i];
        if(min[0]>a[i]) min[0]=a[i];
    }
    tsum-=min[0];
    for(i=0;i<3;i++) {
        if(a[i]!=min[0]&&tsum-a[i]<min[1]) {
            min[1]=tsum-a[i];
        }
    }
    min[2]=tsum-min[1];
    for(i=0;i<3;i++) {
        printf("%d ", min[i]);
    }
}