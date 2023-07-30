#include <stdio.h>
int m(int a, int b) { return a*10+b; }
int main() {
    int i, j, k, s, o, t, f=1;
    for(i=1;i<10&&f;i++) for(j=0;j<10&&f;j++) for(k=0;k<10&&f;k++) {
        if((m(i, j))*2==m(m(k, j), j)) {
            f=0;
            s=i;
            o=j;
            t=k;
        }
    }
    printf("%d%d+%d%d=%d%d%d", s, o, s, o, t, o, o);
}