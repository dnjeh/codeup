#include <stdio.h>
int main() {
    int t, max, maxi, i;
    for(i=0;i<9;i++) {
        scanf("%d", &t);
        if(!i||t>max) {
            max=t;
            maxi=i;
        }
    }
    printf("%d\n%d", max, maxi+1);
}