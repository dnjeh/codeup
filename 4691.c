#include <stdio.h> 
int main() {
    int n, i, max, now, t, tt[4];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d %d %d", &tt[0], &tt[1], &tt[2], &tt[3]);
        t=(tt[0]==tt[1])+(tt[0]==tt[2])+(tt[1]==tt[2])+(tt[1]==tt[3])+(tt[2]==tt[3])+(tt[0]==tt[3]);
        switch(t) {
            case 6:
                now=50000+tt[0]*5000;
            case 4:

            case 2:
            case 1:
            default:
        }
    }
}