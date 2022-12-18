#include <stdio.h>
int main() {
    int Fsum=0, Msum=0, n, i, j;
    char t1[1000];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t1);
        for(j=0;t1[j]!=',';j++);
        if(t1[j+1]=='F') {
            Fsum++;
        }
        else {
            Msum++;
        }
    }
    printf("%d\n%d", Msum, Fsum);
}