#include <stdio.h>
int m(int a, int b) { return a*10+b; }
int main() {
    int i, j, k, s, o, t, f=1;
    for(i=1;i<10&&f;i++) for(j=0;j<10&&f;j++) for(k=0;k<10&&f;k++) {
        if((m(m(i, j), k))-m(i, j)==m(k, k)) {
            f=0;
            s=i;
            o=j;
            t=k;
        }
    }
    printf("%d%d%d-%d%d=%d%d", s, o, t, s, o, t, t);
}