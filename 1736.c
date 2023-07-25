#include <stdio.h>
int main() {
    int i, b[4], c[3]={24, 60, 60};
    scanf("%d", &b[3]);
    for(i=2;i>=0;i--) {
        b[i]=b[i+1]/c[i];
        b[i+1]=b[i+1]%c[i];
    }
    for(i=0;i<4;i++) printf("%d ", b[i]);
}