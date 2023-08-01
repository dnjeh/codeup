#include <stdio.h>
int main() {
    long long int r=3, x1=1, x2=3, y1=1, y2=4, t;
    r*=r;
    t=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    if(r==t) printf("on");
    else if(r<t) printf("out");
    else printf("in");
}