#include <stdio.h>
#include <math.h>
int pef(int t) {
    int i, lim, sum=0;
    lim=(int)sqrt(t);
    for(i=1;i<=lim;i++) {
        if(!(t%i)) {
            sum+=i;
            if(i!=1&&t*t!=t) sum+=t/i;
        }
    }
    if(sum==t) return 1;
    else return 0;
}
int main() {
    int i, t;
    for(i=0;i<5;i++) {
        scanf("%d", &t);
        if(pef(t)) printf("yes\n");
        else printf("no\n");
    }
}