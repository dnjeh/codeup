#include <stdio.h>
int main() {
    int a[22] = {1,0,1,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,1,0,1,0};
    int b[22] = {0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,0,1,0,0,1,0};
    int i, j, tsum=0;
    for(i=0;i<2;i++) {
        tsum=0;
        for(j=0;j<22;j++) {
            if(a[j]==i&&b[j]==i) {
                tsum++;
            }
        }
        printf("%d ", tsum);
    }
}