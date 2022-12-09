#include <stdio.h>
int main() {
    int t, t1=0;
    for(scanf("%d", &t);t!=0;scanf("%d", &t)) {
        if(t<t1) {
            printf("error!");
            return 0;
        }
        t1=t;
    }
}